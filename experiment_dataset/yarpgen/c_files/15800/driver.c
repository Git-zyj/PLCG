#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -593560119;
int var_2 = 1776177679;
unsigned short var_3 = (unsigned short)56848;
unsigned long long int var_4 = 12340949594239945581ULL;
_Bool var_5 = (_Bool)1;
long long int var_6 = -4923413083340999692LL;
unsigned char var_7 = (unsigned char)43;
unsigned int var_8 = 2758900061U;
int zero = 0;
int var_10 = -2040690915;
long long int var_11 = 7210674170383638092LL;
unsigned char var_12 = (unsigned char)236;
unsigned char var_13 = (unsigned char)107;
unsigned int var_14 = 1960522326U;
unsigned short var_15 = (unsigned short)62641;
unsigned int var_16 = 3200604806U;
long long int var_17 = -6276105626842662906LL;
unsigned long long int var_18 = 861881197044191960ULL;
signed char var_19 = (signed char)43;
long long int var_20 = -1720647209702014295LL;
signed char var_21 = (signed char)60;
long long int var_22 = -1059747217977549561LL;
unsigned short var_23 = (unsigned short)32832;
int var_24 = -1757978819;
signed char var_25 = (signed char)-50;
unsigned short var_26 = (unsigned short)48942;
unsigned char var_27 = (unsigned char)245;
unsigned long long int var_28 = 4028813927667606883ULL;
unsigned int var_29 = 260469457U;
_Bool var_30 = (_Bool)0;
short arr_0 [21] ;
_Bool arr_1 [21] ;
int arr_3 [19] [19] ;
unsigned int arr_11 [19] [19] [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_0 [i_0] = (short)28103;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_1 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_3 [i_0] [i_1] = -1483177106;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    arr_11 [i_0] [i_1] [i_2] [i_3] = 2072869452U;
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
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    hash(&seed, var_29);
    hash(&seed, var_30);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
