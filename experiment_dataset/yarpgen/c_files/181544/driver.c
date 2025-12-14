#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
signed char var_8 = (signed char)-123;
signed char var_12 = (signed char)68;
signed char var_14 = (signed char)-78;
unsigned char var_17 = (unsigned char)145;
int zero = 0;
unsigned short var_18 = (unsigned short)17196;
unsigned short var_19 = (unsigned short)49922;
long long int var_20 = 1457333890801465777LL;
unsigned char var_21 = (unsigned char)117;
int var_22 = 6915334;
_Bool var_23 = (_Bool)1;
int arr_0 [19] ;
unsigned short arr_2 [19] ;
unsigned long long int arr_5 [19] [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_0 [i_0] = -131383761;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_2 [i_0] = (unsigned short)16724;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = 1136723393307915757ULL;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
