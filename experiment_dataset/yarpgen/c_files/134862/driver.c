#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -5301431769132944426LL;
signed char var_2 = (signed char)-49;
short var_3 = (short)8021;
unsigned char var_6 = (unsigned char)73;
int var_7 = -1073307099;
int var_9 = -1195096875;
short var_12 = (short)-5236;
unsigned int var_13 = 2896606997U;
long long int var_16 = 4525319144311607833LL;
unsigned long long int var_18 = 8215295449260156578ULL;
signed char var_19 = (signed char)-49;
int zero = 0;
short var_20 = (short)22184;
unsigned char var_21 = (unsigned char)221;
unsigned long long int var_22 = 13702499976242472570ULL;
long long int var_23 = -362004894108285820LL;
unsigned short var_24 = (unsigned short)57170;
_Bool var_25 = (_Bool)0;
_Bool var_26 = (_Bool)0;
unsigned short var_27 = (unsigned short)30826;
_Bool arr_0 [21] ;
unsigned char arr_1 [21] [21] ;
unsigned long long int arr_2 [17] [17] ;
_Bool arr_3 [17] ;
long long int arr_14 [12] [12] [12] ;
short arr_16 [23] ;
unsigned long long int arr_17 [23] [23] ;
_Bool arr_4 [17] [17] ;
long long int arr_15 [12] [12] [12] ;
unsigned short arr_18 [23] ;
long long int arr_19 [23] ;
signed char arr_20 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_0 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned char)84;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_2 [i_0] [i_1] = (i_1 % 2 == 0) ? 7962718883991224027ULL : 16546436125898798391ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_3 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_14 [i_0] [i_1] [i_2] = -8848699010417889962LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_16 [i_0] = (short)-21559;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_17 [i_0] [i_1] = 4595821942170800384ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_4 [i_0] [i_1] = (i_1 % 2 == 0) ? (_Bool)0 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_15 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? 929368041595344759LL : -3661110735499093913LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_18 [i_0] = (unsigned short)16765;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_19 [i_0] = -390814971101807439LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_20 [i_0] = (signed char)21;
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
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                hash(&seed, arr_15 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_18 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_19 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_20 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
