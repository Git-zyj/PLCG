#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
short var_2 = (short)21027;
signed char var_3 = (signed char)-9;
unsigned long long int var_6 = 14590384481726589055ULL;
unsigned char var_7 = (unsigned char)34;
unsigned char var_8 = (unsigned char)94;
unsigned char var_9 = (unsigned char)136;
unsigned long long int var_10 = 2853371153303564773ULL;
_Bool var_11 = (_Bool)1;
unsigned int var_12 = 1669974108U;
_Bool var_13 = (_Bool)1;
long long int var_15 = -8820295949358810455LL;
_Bool var_16 = (_Bool)0;
_Bool var_17 = (_Bool)0;
int zero = 0;
unsigned char var_18 = (unsigned char)250;
short var_19 = (short)5369;
int var_20 = 1256616697;
signed char var_21 = (signed char)(-127 - 1);
unsigned int var_22 = 377745309U;
unsigned short var_23 = (unsigned short)9609;
unsigned long long int var_24 = 2888269215515760401ULL;
unsigned long long int var_25 = 7817760399700048001ULL;
unsigned long long int var_26 = 10187837249285655958ULL;
unsigned char var_27 = (unsigned char)144;
_Bool var_28 = (_Bool)1;
_Bool var_29 = (_Bool)1;
unsigned char var_30 = (unsigned char)1;
_Bool var_31 = (_Bool)1;
unsigned long long int var_32 = 16255940088581704220ULL;
unsigned char var_33 = (unsigned char)192;
unsigned char arr_0 [18] ;
unsigned int arr_4 [18] ;
unsigned char arr_7 [18] ;
long long int arr_8 [18] ;
unsigned int arr_13 [18] [18] ;
unsigned char arr_17 [18] [18] [18] [18] ;
unsigned short arr_2 [18] [18] ;
short arr_14 [18] ;
short arr_20 [18] ;
signed char arr_23 [18] [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_0 [i_0] = (unsigned char)106;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? 916813934U : 1958783343U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? (unsigned char)174 : (unsigned char)184;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_8 [i_0] = 975171945348109716LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_13 [i_0] [i_1] = (i_0 % 2 == 0) ? 200849787U : 2414517535U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    arr_17 [i_0] [i_1] [i_2] [i_3] = (unsigned char)182;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned short)48654;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_14 [i_0] = (i_0 % 2 == 0) ? (short)32574 : (short)-4261;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_20 [i_0] = (i_0 % 2 == 0) ? (short)-2380 : (short)-9406;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_23 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (signed char)-14 : (signed char)95;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    hash(&seed, var_29);
    hash(&seed, var_30);
    hash(&seed, var_31);
    hash(&seed, var_32);
    hash(&seed, var_33);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_14 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_20 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                hash(&seed, arr_23 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
