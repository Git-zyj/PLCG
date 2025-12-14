#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)249;
unsigned long long int var_4 = 5062021422078686796ULL;
_Bool var_5 = (_Bool)0;
int var_6 = -1894813134;
unsigned short var_8 = (unsigned short)8981;
unsigned short var_10 = (unsigned short)61710;
unsigned long long int var_11 = 6258832288495202488ULL;
unsigned int var_13 = 4237542328U;
unsigned long long int var_17 = 7056852662660900461ULL;
signed char var_19 = (signed char)41;
int zero = 0;
int var_20 = 1386867162;
int var_21 = 1613141947;
unsigned char var_22 = (unsigned char)63;
long long int var_23 = 1587426996291311191LL;
_Bool var_24 = (_Bool)1;
unsigned short var_25 = (unsigned short)55810;
unsigned short var_26 = (unsigned short)44964;
signed char var_27 = (signed char)107;
int var_28 = -1604951420;
short arr_0 [13] [13] ;
unsigned long long int arr_3 [13] [13] [13] ;
int arr_4 [13] ;
long long int arr_5 [13] [13] ;
signed char arr_6 [13] ;
unsigned long long int arr_11 [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_0 [i_0] [i_1] = (short)24247;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = 5112494399467953337ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_4 [i_0] = 677112694;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_5 [i_0] [i_1] = 6696363843067369626LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_6 [i_0] = (signed char)-10;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_11 [i_0] [i_1] = 16647420829147253033ULL;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
