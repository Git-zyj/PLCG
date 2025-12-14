#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2809655988U;
short var_2 = (short)24493;
unsigned long long int var_3 = 7661350757382428944ULL;
int var_4 = -1888864341;
short var_5 = (short)29274;
long long int var_6 = 3453741765970601828LL;
_Bool var_7 = (_Bool)0;
short var_8 = (short)-15594;
long long int var_9 = -1044633310003965627LL;
int var_10 = 1233876193;
long long int var_11 = -8469235412017051278LL;
int zero = 0;
unsigned long long int var_12 = 11610978341892521073ULL;
short var_13 = (short)15406;
int var_14 = 478385698;
unsigned char var_15 = (unsigned char)8;
long long int var_16 = -5410989927028101841LL;
int var_17 = -283288992;
long long int var_18 = 6095807336462125456LL;
unsigned char var_19 = (unsigned char)144;
unsigned char arr_0 [16] ;
unsigned short arr_1 [16] ;
long long int arr_2 [23] [23] ;
unsigned short arr_3 [23] ;
long long int arr_5 [23] ;
short arr_6 [23] [23] ;
_Bool arr_7 [23] [23] ;
unsigned char arr_8 [23] [23] [23] ;
unsigned long long int arr_9 [23] [23] [23] ;
unsigned char arr_10 [23] [23] ;
unsigned char arr_11 [23] [23] [23] [23] ;
int arr_13 [10] ;
long long int arr_12 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_0 [i_0] = (unsigned char)60;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? (unsigned short)45116 : (unsigned short)12631;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_2 [i_0] [i_1] = 512125545312097092LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_3 [i_0] = (unsigned short)15582;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_5 [i_0] = -1805135253992312851LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_6 [i_0] [i_1] = (short)31019;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_7 [i_0] [i_1] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (unsigned char)130 : (unsigned char)211;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = 7119361938665017597ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_10 [i_0] [i_1] = (unsigned char)244;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_11 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? (unsigned char)244 : (unsigned char)29;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_13 [i_0] = 805300645;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_12 [i_0] = 5030977682311899132LL;
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
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_12 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
