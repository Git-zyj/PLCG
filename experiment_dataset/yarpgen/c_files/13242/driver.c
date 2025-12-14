#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 3249268179424891493LL;
short var_1 = (short)-22662;
unsigned char var_4 = (unsigned char)76;
int var_5 = -1362369270;
unsigned char var_7 = (unsigned char)183;
unsigned char var_8 = (unsigned char)118;
int var_9 = -1997301672;
long long int var_11 = -4193399005229095744LL;
unsigned int var_14 = 2631208371U;
short var_15 = (short)-31339;
int zero = 0;
_Bool var_16 = (_Bool)0;
long long int var_17 = -4658596473006817045LL;
unsigned int var_18 = 3482704532U;
signed char var_19 = (signed char)-23;
unsigned char var_20 = (unsigned char)27;
_Bool var_21 = (_Bool)1;
_Bool var_22 = (_Bool)0;
unsigned short var_23 = (unsigned short)12256;
unsigned short var_24 = (unsigned short)57056;
signed char var_25 = (signed char)6;
unsigned long long int var_26 = 8486981338065130567ULL;
int var_27 = 64838327;
short arr_0 [21] ;
int arr_1 [21] [21] ;
unsigned long long int arr_5 [21] [21] ;
unsigned long long int arr_7 [21] [21] [21] ;
unsigned int arr_8 [21] ;
unsigned int arr_9 [21] [21] [21] ;
unsigned short arr_2 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_0 [i_0] = (short)-31320;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_1 [i_0] [i_1] = (i_0 % 2 == 0) ? 683916925 : -554978109;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_5 [i_0] [i_1] = (i_1 % 2 == 0) ? 2382079726485078001ULL : 858580415423471710ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = 3543458148278340677ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_8 [i_0] = 3125341562U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = 1756865249U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (unsigned short)55613 : (unsigned short)54920;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
