#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_5 = (unsigned char)74;
unsigned short var_13 = (unsigned short)56529;
_Bool var_15 = (_Bool)1;
int zero = 0;
signed char var_16 = (signed char)0;
unsigned char var_17 = (unsigned char)225;
unsigned int var_18 = 3004269632U;
long long int var_19 = -2210603084487776250LL;
long long int var_20 = 3795464178897652980LL;
unsigned long long int var_21 = 12765940153442629191ULL;
unsigned char arr_0 [15] ;
unsigned char arr_1 [15] ;
long long int arr_4 [15] [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_0 [i_0] = (unsigned char)88;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_1 [i_0] = (unsigned char)77;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 3605368145346881423LL : -5404150082259523738LL;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
