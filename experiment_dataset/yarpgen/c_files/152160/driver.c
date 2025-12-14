#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)23510;
unsigned int var_4 = 4041278788U;
unsigned short var_5 = (unsigned short)33718;
int var_7 = 2132424522;
unsigned int var_9 = 436371670U;
long long int var_10 = 1536346831571127369LL;
unsigned short var_13 = (unsigned short)65471;
unsigned short var_14 = (unsigned short)22002;
short var_15 = (short)-9243;
int zero = 0;
unsigned char var_16 = (unsigned char)89;
unsigned short var_17 = (unsigned short)14466;
unsigned long long int var_18 = 16563231161665984046ULL;
long long int var_19 = -162976978576289549LL;
short var_20 = (short)-11693;
unsigned int var_21 = 3763764913U;
signed char var_22 = (signed char)52;
_Bool var_23 = (_Bool)0;
short var_24 = (short)3562;
_Bool var_25 = (_Bool)0;
unsigned short var_26 = (unsigned short)12573;
long long int arr_3 [17] ;
unsigned int arr_11 [18] [18] ;
unsigned short arr_13 [18] ;
int arr_15 [18] ;
long long int arr_16 [18] [18] [18] ;
int arr_8 [13] ;
unsigned short arr_9 [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_3 [i_0] = -969736115964301487LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_11 [i_0] [i_1] = 3475598739U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_13 [i_0] = (unsigned short)41557;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_15 [i_0] = 1205524873;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_16 [i_0] [i_1] [i_2] = -7081616646204215402LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_8 [i_0] = (i_0 % 2 == 0) ? 1052600549 : -1104714439;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_9 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned short)22381 : (unsigned short)58785;
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
    hash(&seed, var_25);
    hash(&seed, var_26);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_8 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_9 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
