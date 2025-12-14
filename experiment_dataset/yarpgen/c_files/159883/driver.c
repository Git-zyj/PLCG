#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-9109;
unsigned long long int var_4 = 8609304491381785237ULL;
int var_5 = 1565307547;
int var_8 = 1903790109;
int var_9 = 8666022;
unsigned char var_12 = (unsigned char)194;
unsigned char var_13 = (unsigned char)10;
int zero = 0;
short var_14 = (short)-16130;
unsigned long long int var_15 = 13568820668000429519ULL;
unsigned long long int var_16 = 4818117618770635913ULL;
unsigned char var_17 = (unsigned char)138;
signed char var_18 = (signed char)13;
short var_19 = (short)-23629;
long long int var_20 = 2701129682299763351LL;
unsigned int var_21 = 2435031704U;
unsigned int var_22 = 3872618184U;
unsigned long long int var_23 = 1720544784944880423ULL;
unsigned long long int var_24 = 12241294494908393842ULL;
short var_25 = (short)-7652;
unsigned long long int var_26 = 2115618436123456985ULL;
unsigned long long int var_27 = 10831054227325060759ULL;
unsigned short var_28 = (unsigned short)61531;
_Bool var_29 = (_Bool)0;
_Bool var_30 = (_Bool)0;
unsigned long long int var_31 = 4178043147368794980ULL;
unsigned int var_32 = 1027504356U;
_Bool var_33 = (_Bool)1;
long long int arr_4 [19] ;
unsigned long long int arr_5 [19] [19] ;
short arr_8 [19] [19] [19] ;
unsigned char arr_10 [19] [19] [19] ;
int arr_12 [19] ;
unsigned int arr_14 [19] [19] [19] [19] ;
short arr_25 [19] ;
unsigned long long int arr_32 [19] ;
_Bool arr_45 [21] ;
_Bool arr_46 [21] ;
unsigned int arr_2 [13] ;
int arr_6 [19] ;
short arr_15 [19] [19] [19] [19] ;
long long int arr_19 [19] [19] ;
short arr_22 [19] ;
unsigned char arr_28 [19] [19] [19] [19] ;
int arr_29 [19] [19] [19] ;
unsigned char arr_30 [19] [19] ;
short arr_34 [19] [19] ;
int arr_39 [19] ;
signed char arr_40 [19] ;
unsigned short arr_41 [19] ;
unsigned long long int arr_44 [19] ;
unsigned long long int arr_48 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_4 [i_0] = -2387192824612081039LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_5 [i_0] [i_1] = 18104973620443948232ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (short)-31039 : (short)-8766;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (unsigned char)169 : (unsigned char)84;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_12 [i_0] = (i_0 % 2 == 0) ? -474106003 : -539294720;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    arr_14 [i_0] [i_1] [i_2] [i_3] = 2231641491U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_25 [i_0] = (i_0 % 2 == 0) ? (short)22194 : (short)-6198;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_32 [i_0] = 8049107196729115116ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_45 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_46 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_2 [i_0] = 2851001936U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_6 [i_0] = -592611461;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    arr_15 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? (short)-3311 : (short)-11422;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_19 [i_0] [i_1] = 7184650207502061677LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_22 [i_0] = (short)14401;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    arr_28 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? (unsigned char)1 : (unsigned char)122;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_29 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? -942734176 : 1625200483;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_30 [i_0] [i_1] = (unsigned char)155;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_34 [i_0] [i_1] = (short)-2247;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_39 [i_0] = -740681731;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_40 [i_0] = (signed char)-42;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_41 [i_0] = (unsigned short)63889;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_44 [i_0] = 10876842458000776392ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_48 [i_0] = 10082913850732874216ULL;
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
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    hash(&seed, arr_15 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_19 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_22 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    hash(&seed, arr_28 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                hash(&seed, arr_29 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_30 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_34 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_39 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_40 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_41 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_44 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_48 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
