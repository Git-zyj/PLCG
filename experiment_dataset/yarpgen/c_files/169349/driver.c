#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)33;
unsigned char var_1 = (unsigned char)93;
short var_3 = (short)28465;
unsigned char var_4 = (unsigned char)130;
int var_7 = 1859707299;
_Bool var_8 = (_Bool)0;
short var_9 = (short)-1664;
short var_12 = (short)9487;
_Bool var_13 = (_Bool)1;
int zero = 0;
int var_14 = -283270212;
signed char var_15 = (signed char)-115;
short var_16 = (short)14473;
unsigned long long int var_17 = 2180296684252125600ULL;
signed char var_18 = (signed char)22;
signed char var_19 = (signed char)48;
unsigned char var_20 = (unsigned char)233;
unsigned char var_21 = (unsigned char)100;
short var_22 = (short)1157;
unsigned char var_23 = (unsigned char)241;
signed char arr_0 [14] [14] ;
long long int arr_1 [14] ;
unsigned char arr_2 [14] ;
unsigned short arr_6 [14] [14] [14] ;
unsigned short arr_9 [10] ;
unsigned int arr_10 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_0 [i_0] [i_1] = (signed char)(-127 - 1);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_1 [i_0] = 2260838126482227481LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_2 [i_0] = (unsigned char)4;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (unsigned short)53647 : (unsigned short)33480;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_9 [i_0] = (unsigned short)59285;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_10 [i_0] = 2605947740U;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                hash(&seed, arr_6 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_9 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_10 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
