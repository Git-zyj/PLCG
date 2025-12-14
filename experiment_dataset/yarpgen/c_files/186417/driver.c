#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)45;
unsigned int var_2 = 824433947U;
long long int var_3 = 539202043173085326LL;
_Bool var_6 = (_Bool)1;
unsigned long long int var_7 = 3019202988342490547ULL;
signed char var_8 = (signed char)117;
signed char var_9 = (signed char)78;
int zero = 0;
_Bool var_11 = (_Bool)0;
_Bool var_12 = (_Bool)0;
unsigned short var_13 = (unsigned short)43705;
unsigned short var_14 = (unsigned short)55287;
int var_15 = -1620764463;
unsigned char var_16 = (unsigned char)169;
unsigned short var_17 = (unsigned short)36777;
unsigned char var_18 = (unsigned char)32;
_Bool var_19 = (_Bool)1;
signed char var_20 = (signed char)-32;
unsigned short arr_1 [21] [21] ;
unsigned short arr_2 [21] ;
int arr_3 [21] [21] ;
short arr_6 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_1 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned short)8714 : (unsigned short)23840;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_2 [i_0] = (unsigned short)37615;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_3 [i_0] [i_1] = (i_1 % 2 == 0) ? -42727020 : -1140885786;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? (short)-6537 : (short)28061;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
