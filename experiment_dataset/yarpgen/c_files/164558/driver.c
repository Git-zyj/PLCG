#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 592159262;
signed char var_4 = (signed char)-5;
unsigned short var_5 = (unsigned short)4138;
unsigned short var_9 = (unsigned short)12218;
int var_10 = 2112603073;
unsigned short var_12 = (unsigned short)36312;
_Bool var_13 = (_Bool)0;
unsigned long long int var_18 = 1173330026866529588ULL;
int zero = 0;
unsigned int var_19 = 1147931646U;
int var_20 = -2069111870;
unsigned short var_21 = (unsigned short)6225;
int var_22 = -1107855167;
long long int arr_3 [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_3 [i_0] [i_1] = 4273776632588861624LL;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
