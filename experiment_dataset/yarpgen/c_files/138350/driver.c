#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-20577;
unsigned int var_2 = 206072052U;
unsigned int var_4 = 3145845192U;
unsigned long long int var_5 = 12875076807679146184ULL;
short var_6 = (short)6176;
unsigned int var_7 = 4108322190U;
unsigned int var_8 = 2936953562U;
short var_9 = (short)-32280;
unsigned int var_10 = 1241363619U;
unsigned int var_11 = 4272370718U;
int zero = 0;
unsigned long long int var_12 = 815681010773621082ULL;
unsigned int var_13 = 1808983713U;
short var_14 = (short)14622;
unsigned int var_15 = 1324088710U;
unsigned long long int var_16 = 9698155507120693864ULL;
short var_17 = (short)24575;
unsigned int var_18 = 89218064U;
short var_19 = (short)9872;
unsigned int var_20 = 2271188714U;
unsigned int var_21 = 1245045552U;
unsigned int var_22 = 1213309958U;
unsigned int var_23 = 3978504551U;
unsigned int var_24 = 2181238675U;
unsigned int var_25 = 3215416280U;
unsigned long long int var_26 = 1519362843464892200ULL;
short var_27 = (short)31936;
unsigned long long int var_28 = 11839410264989786518ULL;
short var_29 = (short)2481;
unsigned long long int var_30 = 4004974500854213704ULL;
short var_31 = (short)2279;
short arr_0 [14] [14] ;
unsigned int arr_1 [14] ;
unsigned int arr_2 [14] [14] [14] ;
unsigned long long int arr_5 [14] [14] [14] ;
unsigned int arr_6 [14] [14] [14] [14] ;
short arr_9 [11] ;
unsigned long long int arr_10 [11] ;
unsigned long long int arr_11 [11] ;
short arr_12 [11] [11] [11] ;
unsigned int arr_15 [11] [11] [11] [11] ;
unsigned int arr_19 [11] ;
short arr_24 [11] [11] [11] [11] [11] [11] ;
unsigned int arr_25 [11] [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_0 [i_0] [i_1] = (short)-10254;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_1 [i_0] = 3847296954U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = 2178936849U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = 3992497719110408132ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    arr_6 [i_0] [i_1] [i_2] [i_3] = 3667493567U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_9 [i_0] = (short)14736;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_10 [i_0] = 655051676023825844ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_11 [i_0] = 273973303427317479ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_12 [i_0] [i_1] [i_2] = (short)12686;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    arr_15 [i_0] [i_1] [i_2] [i_3] = 2758823013U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_19 [i_0] = 2596004783U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 11; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 11; ++i_5) 
                            arr_24 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (short)-28388;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_25 [i_0] [i_1] [i_2] = 2638959934U;
}

void checksum() {
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
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    hash(&seed, var_29);
    hash(&seed, var_30);
    hash(&seed, var_31);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
