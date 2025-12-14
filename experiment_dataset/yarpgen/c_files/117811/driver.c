#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)9;
unsigned short var_3 = (unsigned short)34449;
unsigned long long int var_7 = 10215423500254295325ULL;
unsigned long long int var_9 = 11305814401816071514ULL;
unsigned int var_10 = 1236133627U;
signed char var_12 = (signed char)-28;
int zero = 0;
unsigned long long int var_15 = 4929700385979029086ULL;
unsigned long long int var_16 = 14130653056955341588ULL;
unsigned long long int var_17 = 8859702705553305052ULL;
int var_18 = 460100833;
long long int var_19 = 2140935415423563801LL;
unsigned char var_20 = (unsigned char)73;
unsigned int var_21 = 2892311536U;
unsigned long long int var_22 = 11501481337581595601ULL;
signed char var_23 = (signed char)117;
unsigned long long int var_24 = 6529621327690204648ULL;
_Bool arr_1 [20] ;
unsigned long long int arr_2 [20] ;
unsigned char arr_7 [18] ;
int arr_9 [18] [18] ;
unsigned short arr_10 [18] [18] ;
int arr_3 [20] [20] ;
unsigned short arr_14 [18] [18] ;
unsigned int arr_15 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_2 [i_0] = 16008274972121738638ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_7 [i_0] = (unsigned char)2;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_9 [i_0] [i_1] = (i_1 % 2 == 0) ? 1868819830 : -1546746153;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_10 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned short)46825 : (unsigned short)30649;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_3 [i_0] [i_1] = (i_1 % 2 == 0) ? 186905978 : 833718987;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_14 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned short)958 : (unsigned short)15326;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_15 [i_0] = (i_0 % 2 == 0) ? 1886432454U : 2503341320U;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_14 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_15 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
