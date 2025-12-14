#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)51471;
unsigned long long int var_2 = 6790502081365231454ULL;
short var_3 = (short)32460;
signed char var_4 = (signed char)-81;
short var_5 = (short)2266;
short var_6 = (short)9065;
unsigned short var_7 = (unsigned short)55349;
signed char var_8 = (signed char)-122;
int var_9 = 1412288905;
int var_11 = -1855977864;
long long int var_12 = 8290605461807656LL;
unsigned long long int var_13 = 10889795951634568307ULL;
unsigned long long int var_14 = 9153656202198059178ULL;
int zero = 0;
long long int var_15 = 8817235950999804832LL;
unsigned long long int var_16 = 11813505044165381916ULL;
unsigned long long int var_17 = 8720542378514183513ULL;
unsigned long long int var_18 = 3483851293146197187ULL;
short var_19 = (short)-29265;
long long int var_20 = 4927323295728937187LL;
unsigned short var_21 = (unsigned short)26030;
unsigned short var_22 = (unsigned short)22850;
short var_23 = (short)9805;
short var_24 = (short)27605;
short var_25 = (short)-21740;
int var_26 = 2116286355;
short var_27 = (short)-18182;
unsigned long long int var_28 = 8790458577555474958ULL;
unsigned short var_29 = (unsigned short)24811;
unsigned short var_30 = (unsigned short)26930;
unsigned short var_31 = (unsigned short)2097;
short var_32 = (short)-17032;
short var_33 = (short)8354;
long long int var_34 = 5101082799935836132LL;
long long int var_35 = -8182575997237660905LL;
long long int var_36 = -1222182510731007976LL;
unsigned int var_37 = 4248673803U;
signed char var_38 = (signed char)48;
unsigned int var_39 = 2554503075U;
int var_40 = -1709304172;
unsigned short var_41 = (unsigned short)21078;
signed char arr_1 [14] ;
short arr_8 [19] [19] ;
long long int arr_17 [22] ;
long long int arr_19 [22] [22] [22] ;
short arr_22 [22] [22] [22] [22] ;
long long int arr_24 [22] [22] [22] [22] ;
short arr_27 [22] [22] [22] [22] [22] ;
unsigned long long int arr_29 [22] [22] [22] [22] [22] ;
unsigned short arr_32 [22] ;
short arr_33 [22] [22] [22] ;
_Bool arr_34 [22] ;
signed char arr_38 [22] [22] [22] [22] ;
int arr_42 [19] [19] ;
short arr_55 [19] [19] [19] ;
int arr_13 [11] ;
short arr_14 [11] ;
short arr_15 [11] ;
unsigned short arr_40 [22] [22] ;
unsigned long long int arr_60 [19] [19] [19] ;
unsigned int arr_61 [19] [19] [19] [19] [19] ;
unsigned short arr_62 [19] ;
long long int arr_70 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_1 [i_0] = (signed char)68;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_8 [i_0] [i_1] = (short)-13577;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_17 [i_0] = -5241773337898857065LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_19 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? 7511365680164212161LL : -586814830957052042LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    arr_22 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? (short)-95 : (short)-120;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    arr_24 [i_0] [i_1] [i_2] [i_3] = -3363206177486486410LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 22; ++i_4) 
                        arr_27 [i_0] [i_1] [i_2] [i_3] [i_4] = (short)-28666;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 22; ++i_4) 
                        arr_29 [i_0] [i_1] [i_2] [i_3] [i_4] = 6115797765493891960ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_32 [i_0] = (i_0 % 2 == 0) ? (unsigned short)11813 : (unsigned short)60965;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_33 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (short)-32239 : (short)-20566;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_34 [i_0] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    arr_38 [i_0] [i_1] [i_2] [i_3] = (signed char)125;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_42 [i_0] [i_1] = -861195873;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_55 [i_0] [i_1] [i_2] = (short)5670;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_13 [i_0] = -248342966;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_14 [i_0] = (short)-5006;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_15 [i_0] = (short)-29759;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_40 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned short)12651 : (unsigned short)60135;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_60 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 11951526183741240328ULL : 3129452216143143744ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 19; ++i_4) 
                        arr_61 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_1 % 2 == 0) ? 1584727077U : 3534093674U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_62 [i_0] = (i_0 % 2 == 0) ? (unsigned short)28233 : (unsigned short)39367;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_70 [i_0] = -5018651426160657044LL;
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
    hash(&seed, var_40);
    hash(&seed, var_41);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_13 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_14 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_15 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_40 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                hash(&seed, arr_60 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 19; ++i_4) 
                        hash(&seed, arr_61 [i_0] [i_1] [i_2] [i_3] [i_4] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_62 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_70 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
