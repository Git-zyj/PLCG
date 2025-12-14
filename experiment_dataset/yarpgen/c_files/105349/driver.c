#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)212;
signed char var_1 = (signed char)108;
_Bool var_2 = (_Bool)0;
int var_4 = -2007062485;
unsigned char var_5 = (unsigned char)133;
short var_6 = (short)-29888;
long long int var_7 = -9110980890672300614LL;
long long int var_8 = 1494869242768563867LL;
long long int var_9 = 8071850715618156023LL;
unsigned short var_10 = (unsigned short)20494;
unsigned long long int var_11 = 11394514160524649396ULL;
short var_13 = (short)-27829;
unsigned char var_14 = (unsigned char)2;
unsigned int var_15 = 2039886171U;
long long int var_16 = 1541673597637737793LL;
unsigned int var_17 = 1954720841U;
int zero = 0;
int var_18 = 780654135;
unsigned int var_19 = 39899990U;
signed char var_20 = (signed char)106;
unsigned char var_21 = (unsigned char)140;
int var_22 = -141565839;
int var_23 = -1947659621;
short var_24 = (short)20129;
signed char var_25 = (signed char)117;
int var_26 = 974313483;
signed char var_27 = (signed char)(-127 - 1);
unsigned char var_28 = (unsigned char)144;
int var_29 = -2106978705;
unsigned int var_30 = 4193780698U;
long long int var_31 = -7715242352873431107LL;
unsigned short arr_0 [24] ;
long long int arr_1 [24] [24] ;
short arr_2 [24] ;
unsigned char arr_3 [24] [24] [24] ;
short arr_4 [24] ;
short arr_5 [24] [24] [24] [24] ;
unsigned char arr_6 [24] [24] [24] ;
long long int arr_7 [24] ;
signed char arr_11 [24] [24] [24] [24] ;
int arr_14 [24] ;
unsigned char arr_15 [24] [24] ;
signed char arr_16 [24] [24] [24] ;
int arr_18 [25] [25] ;
long long int arr_19 [25] ;
unsigned int arr_20 [25] ;
int arr_22 [19] ;
unsigned char arr_8 [24] [24] [24] [24] ;
unsigned char arr_9 [24] ;
int arr_12 [24] [24] ;
int arr_13 [24] [24] [24] ;
unsigned long long int arr_17 [24] [24] ;
unsigned char arr_23 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_0 [i_0] = (unsigned short)7075;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_1 [i_0] [i_1] = 8157173661730019391LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_2 [i_0] = (short)-27732;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (unsigned char)184;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_4 [i_0] = (short)8400;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    arr_5 [i_0] [i_1] [i_2] [i_3] = (short)-27823;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (unsigned char)15;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_7 [i_0] = 2436803781956356509LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    arr_11 [i_0] [i_1] [i_2] [i_3] = (signed char)-125;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_14 [i_0] = 594646435;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_15 [i_0] [i_1] = (unsigned char)223;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_16 [i_0] [i_1] [i_2] = (signed char)-91;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_18 [i_0] [i_1] = -1852414644;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_19 [i_0] = 1345443332164693575LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_20 [i_0] = 4176529437U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_22 [i_0] = 1822882205;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    arr_8 [i_0] [i_1] [i_2] [i_3] = (unsigned char)15;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_9 [i_0] = (unsigned char)69;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_12 [i_0] [i_1] = -137833448;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_13 [i_0] [i_1] [i_2] = -1590669678;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_17 [i_0] [i_1] = 403016452730561362ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_23 [i_0] = (unsigned char)215;
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
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    hash(&seed, arr_8 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_9 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            hash(&seed, arr_12 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                hash(&seed, arr_13 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            hash(&seed, arr_17 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_23 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
