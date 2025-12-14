#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 1263110874983575556ULL;
long long int var_4 = 2322811840793747168LL;
unsigned int var_5 = 2094868884U;
int var_6 = 1976389926;
short var_7 = (short)11328;
_Bool var_9 = (_Bool)0;
signed char var_11 = (signed char)-66;
int var_13 = 1390492303;
short var_14 = (short)10505;
_Bool var_15 = (_Bool)1;
unsigned int var_16 = 816591486U;
unsigned char var_17 = (unsigned char)167;
int zero = 0;
unsigned short var_18 = (unsigned short)62772;
unsigned long long int var_19 = 126086740143183356ULL;
unsigned short var_20 = (unsigned short)50503;
int var_21 = -1389212090;
unsigned long long int var_22 = 3809938274842524960ULL;
unsigned char var_23 = (unsigned char)223;
int var_24 = -1669489344;
unsigned int var_25 = 597196641U;
signed char var_26 = (signed char)74;
unsigned int var_27 = 859280673U;
unsigned char var_28 = (unsigned char)145;
int arr_0 [21] [21] ;
unsigned short arr_1 [21] ;
_Bool arr_2 [21] ;
short arr_5 [21] ;
signed char arr_6 [21] [21] ;
unsigned long long int arr_10 [21] [21] [21] [21] ;
unsigned short arr_11 [12] ;
unsigned int arr_14 [17] ;
short arr_3 [21] ;
unsigned long long int arr_4 [21] ;
short arr_13 [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_0 [i_0] [i_1] = -1396405602;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_1 [i_0] = (unsigned short)358;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_2 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_5 [i_0] = (short)15114;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_6 [i_0] [i_1] = (signed char)-29;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    arr_10 [i_0] [i_1] [i_2] [i_3] = 13232396553222904656ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_11 [i_0] = (unsigned short)22328;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_14 [i_0] = 1221925130U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_3 [i_0] = (short)12756;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_4 [i_0] = 14067083440263512049ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_13 [i_0] [i_1] = (short)-12269;
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
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_13 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
