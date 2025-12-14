#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -6750916335422567374LL;
int var_1 = 2096384986;
unsigned long long int var_3 = 2453046277501388177ULL;
unsigned long long int var_4 = 5198087927802776249ULL;
unsigned int var_5 = 71947765U;
int var_6 = 1185084050;
int var_7 = -1709337133;
int var_8 = 698875577;
int var_9 = 1079168118;
int zero = 0;
unsigned int var_10 = 2482542985U;
unsigned short var_11 = (unsigned short)59680;
unsigned char var_12 = (unsigned char)41;
int var_13 = -690372895;
unsigned int var_14 = 3541429517U;
unsigned long long int var_15 = 8921983686782067940ULL;
int var_16 = -39578336;
int var_17 = 1089763335;
unsigned char var_18 = (unsigned char)194;
int arr_0 [19] ;
short arr_1 [19] ;
int arr_4 [17] ;
_Bool arr_5 [17] ;
unsigned char arr_7 [17] ;
unsigned long long int arr_9 [17] [17] ;
int arr_10 [17] ;
int arr_12 [17] ;
unsigned int arr_13 [17] [17] [17] [17] ;
short arr_14 [17] [17] [17] [17] [17] ;
unsigned int arr_16 [17] [17] [17] [17] [17] [17] ;
int arr_26 [18] ;
unsigned long long int arr_27 [18] [18] ;
short arr_31 [15] ;
unsigned int arr_32 [15] [15] ;
unsigned short arr_2 [19] ;
unsigned short arr_3 [19] [19] ;
unsigned int arr_17 [17] [17] [17] [17] ;
_Bool arr_18 [17] [17] [17] [17] ;
unsigned short arr_19 [17] [17] ;
int arr_20 [17] ;
int arr_21 [17] ;
unsigned short arr_33 [15] ;
long long int arr_34 [15] [15] ;
int arr_35 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_0 [i_0] = -622998166;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_1 [i_0] = (short)-15219;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_4 [i_0] = 2028638952;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_5 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_7 [i_0] = (unsigned char)124;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_9 [i_0] [i_1] = 16308670166654159193ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_10 [i_0] = -1031488266;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_12 [i_0] = 1547270708;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    arr_13 [i_0] [i_1] [i_2] [i_3] = 2619399654U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 17; ++i_4) 
                        arr_14 [i_0] [i_1] [i_2] [i_3] [i_4] = (short)12695;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 17; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 17; ++i_5) 
                            arr_16 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = 909453610U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_26 [i_0] = -1732222004;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_27 [i_0] [i_1] = 16464227214784966520ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_31 [i_0] = (short)8182;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_32 [i_0] [i_1] = (i_1 % 2 == 0) ? 2094297337U : 1844364266U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_2 [i_0] = (unsigned short)60729;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned short)10898;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    arr_17 [i_0] [i_1] [i_2] [i_3] = 471075268U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    arr_18 [i_0] [i_1] [i_2] [i_3] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_19 [i_0] [i_1] = (unsigned short)51085;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_20 [i_0] = -1619844378;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_21 [i_0] = 1307067776;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_33 [i_0] = (i_0 % 2 == 0) ? (unsigned short)35742 : (unsigned short)20500;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_34 [i_0] [i_1] = (i_0 % 2 == 0) ? 5404921299664617738LL : -3765116373070958997LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_35 [i_0] = -608866143;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    hash(&seed, arr_17 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    hash(&seed, arr_18 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            hash(&seed, arr_19 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_20 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_21 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_33 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_34 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_35 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
