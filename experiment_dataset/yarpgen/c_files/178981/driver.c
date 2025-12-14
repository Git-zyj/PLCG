#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)253;
unsigned char var_1 = (unsigned char)64;
unsigned int var_2 = 1862157342U;
short var_3 = (short)-6368;
short var_4 = (short)10780;
_Bool var_5 = (_Bool)0;
long long int var_6 = 8471219469053346216LL;
signed char var_7 = (signed char)-36;
int var_8 = 78618623;
unsigned int var_9 = 655013681U;
signed char var_10 = (signed char)27;
signed char var_11 = (signed char)4;
unsigned short var_13 = (unsigned short)18574;
long long int var_14 = -8515258107182286801LL;
signed char var_15 = (signed char)-95;
signed char var_16 = (signed char)85;
unsigned long long int var_17 = 1037081746217202508ULL;
short var_18 = (short)25479;
int zero = 0;
long long int var_19 = -4126723392426408377LL;
signed char var_20 = (signed char)89;
_Bool var_21 = (_Bool)0;
unsigned short var_22 = (unsigned short)39508;
long long int var_23 = -5124427100114409968LL;
_Bool var_24 = (_Bool)0;
long long int var_25 = 5508469988853924670LL;
unsigned char var_26 = (unsigned char)165;
signed char var_27 = (signed char)-11;
unsigned short var_28 = (unsigned short)64409;
unsigned short var_29 = (unsigned short)24767;
_Bool var_30 = (_Bool)1;
int var_31 = 270474164;
int var_32 = -1767522354;
int var_33 = -1983355370;
signed char var_34 = (signed char)7;
long long int var_35 = 2461284181810538168LL;
unsigned long long int var_36 = 11939806520733861394ULL;
short var_37 = (short)-10946;
long long int arr_0 [10] ;
_Bool arr_1 [10] ;
int arr_2 [10] [10] ;
signed char arr_8 [11] ;
short arr_9 [11] ;
_Bool arr_10 [11] ;
unsigned short arr_11 [11] [11] [11] ;
unsigned char arr_12 [11] ;
int arr_13 [11] [11] ;
unsigned short arr_15 [11] [11] [11] ;
int arr_3 [10] ;
unsigned char arr_14 [11] [11] [11] ;
int arr_19 [11] [11] [11] ;
short arr_29 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_0 [i_0] = -8680460963383150346LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_2 [i_0] [i_1] = 828680078;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_8 [i_0] = (signed char)-45;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_9 [i_0] = (short)11142;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_10 [i_0] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_11 [i_0] [i_1] [i_2] = (unsigned short)2485;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_12 [i_0] = (i_0 % 2 == 0) ? (unsigned char)236 : (unsigned char)228;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_13 [i_0] [i_1] = -188415405;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_15 [i_0] [i_1] [i_2] = (unsigned short)8696;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? 1922061941 : -554719114;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_14 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (unsigned char)127 : (unsigned char)100;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_19 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 1256472642 : 318023966;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_29 [i_0] = (i_0 % 2 == 0) ? (short)-24481 : (short)-769;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                hash(&seed, arr_14 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                hash(&seed, arr_19 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_29 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
