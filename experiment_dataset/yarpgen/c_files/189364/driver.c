#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 1526349081443754790ULL;
unsigned char var_5 = (unsigned char)238;
long long int var_7 = 793480718483834496LL;
_Bool var_8 = (_Bool)0;
signed char var_10 = (signed char)-63;
short var_11 = (short)4991;
short var_14 = (short)-17231;
int zero = 0;
short var_18 = (short)-31040;
long long int var_19 = -7529349383039173695LL;
long long int var_20 = -6001250986343878394LL;
unsigned char var_21 = (unsigned char)2;
unsigned short var_22 = (unsigned short)15978;
_Bool var_23 = (_Bool)0;
unsigned long long int var_24 = 13996999705634784584ULL;
unsigned int var_25 = 737474007U;
short var_26 = (short)14650;
unsigned long long int var_27 = 16059542964199120186ULL;
signed char var_28 = (signed char)82;
unsigned char var_29 = (unsigned char)242;
signed char var_30 = (signed char)-58;
unsigned int var_31 = 1420412745U;
unsigned int var_32 = 4090086373U;
long long int var_33 = -2080008100532535791LL;
long long int var_34 = 6745409231206448343LL;
unsigned int var_35 = 2797558758U;
unsigned char var_36 = (unsigned char)181;
long long int var_37 = 7851921207810002076LL;
unsigned char var_38 = (unsigned char)95;
unsigned short var_39 = (unsigned short)10348;
unsigned long long int arr_1 [12] ;
unsigned short arr_2 [12] [12] ;
unsigned int arr_3 [12] ;
_Bool arr_4 [12] ;
_Bool arr_5 [12] [12] ;
signed char arr_6 [12] [12] [12] ;
_Bool arr_9 [12] ;
unsigned long long int arr_10 [12] ;
long long int arr_11 [12] [12] ;
unsigned char arr_16 [24] [24] ;
short arr_17 [24] ;
unsigned int arr_18 [24] [24] ;
unsigned int arr_19 [24] [24] ;
long long int arr_21 [15] ;
signed char arr_23 [19] ;
long long int arr_24 [19] [19] ;
unsigned long long int arr_7 [12] ;
int arr_8 [12] ;
int arr_13 [12] ;
long long int arr_14 [12] ;
_Bool arr_15 [12] ;
unsigned int arr_26 [19] ;
unsigned int arr_27 [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_1 [i_0] = 12953878053012122962ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned short)63766;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_3 [i_0] = 2834003342U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_4 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_5 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (signed char)51;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_9 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_10 [i_0] = 6770351457822865884ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_11 [i_0] [i_1] = -5915578759053672797LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_16 [i_0] [i_1] = (unsigned char)68;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_17 [i_0] = (short)29218;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_18 [i_0] [i_1] = 2874887832U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_19 [i_0] [i_1] = 2753764963U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_21 [i_0] = -8240610110382800257LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_23 [i_0] = (signed char)17;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_24 [i_0] [i_1] = -3731731486865124675LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_7 [i_0] = 930893285636836960ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_8 [i_0] = -1350138631;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_13 [i_0] = -1248677505;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_14 [i_0] = 4708528296358292329LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_15 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_26 [i_0] = 382089732U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_27 [i_0] [i_1] = 4016072928U;
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
    hash(&seed, var_34);
    hash(&seed, var_35);
    hash(&seed, var_36);
    hash(&seed, var_37);
    hash(&seed, var_38);
    hash(&seed, var_39);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_8 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_13 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_14 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_15 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_26 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_27 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
