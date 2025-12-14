#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1978486719;
int var_1 = 453631293;
int var_4 = -1471375846;
short var_7 = (short)1416;
short var_10 = (short)27777;
unsigned long long int var_13 = 12071515644342249687ULL;
int zero = 0;
int var_14 = -1526192320;
long long int var_15 = -3487255189667258289LL;
signed char var_16 = (signed char)36;
int var_17 = -1384968142;
signed char var_18 = (signed char)-115;
int var_19 = -1888698094;
unsigned short var_20 = (unsigned short)39711;
unsigned int var_21 = 67417603U;
unsigned long long int var_22 = 18246399042128463435ULL;
long long int var_23 = -7580421434509922327LL;
unsigned long long int var_24 = 15860705791140006028ULL;
int arr_4 [19] ;
long long int arr_6 [19] ;
unsigned char arr_7 [19] [19] ;
long long int arr_8 [19] ;
unsigned long long int arr_11 [19] [19] [19] ;
unsigned char arr_15 [19] [19] [19] ;
unsigned char arr_3 [12] ;
int arr_9 [19] [19] ;
unsigned char arr_10 [19] [19] ;
int arr_16 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_4 [i_0] = -1938383250;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? 7348584507280908603LL : 384287558274941717LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_7 [i_0] [i_1] = (unsigned char)209;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_8 [i_0] = -1728336190451916944LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_11 [i_0] [i_1] [i_2] = 2961308294548101501ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_15 [i_0] [i_1] [i_2] = (unsigned char)44;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_3 [i_0] = (unsigned char)29;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_9 [i_0] [i_1] = (i_0 % 2 == 0) ? 1267026101 : -905131830;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_10 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned char)77 : (unsigned char)50;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_16 [i_0] = (i_0 % 2 == 0) ? 145891953 : -802315397;
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
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_9 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_10 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_16 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
