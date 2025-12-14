#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-9046;
long long int var_2 = 2719807760333920299LL;
short var_3 = (short)11306;
short var_4 = (short)9484;
long long int var_6 = -6052250949155886579LL;
int var_7 = 979557440;
long long int var_8 = -2676343338158845781LL;
int var_9 = 1749026199;
int zero = 0;
short var_10 = (short)12490;
long long int var_11 = -6998857846545555693LL;
unsigned long long int var_12 = 3496461425370131184ULL;
int var_13 = 2045560033;
short var_14 = (short)-10755;
int var_15 = 135586396;
long long int var_16 = -6164621811188476789LL;
short var_17 = (short)24779;
short var_18 = (short)22219;
int var_19 = -821832494;
short var_20 = (short)-8904;
long long int var_21 = -1059073307133966059LL;
int var_22 = 1500858794;
long long int var_23 = 5225866909801524942LL;
unsigned long long int arr_1 [15] ;
short arr_2 [15] [15] ;
short arr_7 [15] [15] ;
short arr_9 [15] ;
unsigned long long int arr_10 [15] ;
long long int arr_15 [15] [15] [15] [15] [15] [15] ;
short arr_16 [15] [15] [15] [15] [15] ;
short arr_19 [15] ;
unsigned long long int arr_23 [24] ;
unsigned long long int arr_24 [24] [24] ;
int arr_28 [24] [24] [24] [24] ;
short arr_4 [15] ;
long long int arr_17 [15] [15] ;
short arr_20 [15] [15] ;
short arr_33 [24] ;
unsigned long long int arr_34 [24] [24] [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? 8911040428748289813ULL : 12581476349804338621ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_2 [i_0] [i_1] = (short)9665;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_7 [i_0] [i_1] = (short)-8855;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_9 [i_0] = (short)26623;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_10 [i_0] = 4031868279242626642ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 15; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 15; ++i_5) 
                            arr_15 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = -7471682399705028368LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 15; ++i_4) 
                        arr_16 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_0 % 2 == 0) ? (short)23347 : (short)16872;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_19 [i_0] = (short)-17892;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_23 [i_0] = 13208789486478404027ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_24 [i_0] [i_1] = 3260143035672000578ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    arr_28 [i_0] [i_1] [i_2] [i_3] = 1704802043;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? (short)252 : (short)-30439;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_17 [i_0] [i_1] = (i_0 % 2 == 0) ? 4868938821288853559LL : -5954516411797450793LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_20 [i_0] [i_1] = (i_1 % 2 == 0) ? (short)9400 : (short)15394;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_33 [i_0] = (short)-5454;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    arr_34 [i_0] [i_1] [i_2] [i_3] = 14885943520049788439ULL;
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
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_17 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_20 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_33 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    hash(&seed, arr_34 [i_0] [i_1] [i_2] [i_3] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
