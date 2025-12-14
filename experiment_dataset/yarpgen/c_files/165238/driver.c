#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_6 = (unsigned short)25173;
int zero = 0;
unsigned int var_16 = 3256662962U;
short var_17 = (short)13020;
unsigned int var_18 = 4151248437U;
unsigned int var_19 = 162402815U;
long long int var_20 = 6601432408830787087LL;
unsigned int var_21 = 2060297177U;
_Bool var_22 = (_Bool)0;
short var_23 = (short)13893;
_Bool var_24 = (_Bool)0;
short arr_0 [13] ;
long long int arr_1 [13] ;
signed char arr_2 [19] ;
int arr_5 [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = (short)-13403;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_1 [i_0] = -8838185093510086317LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_2 [i_0] = (signed char)-115;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_5 [i_0] [i_1] = -184593139;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
