#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)111;
unsigned char var_1 = (unsigned char)3;
unsigned long long int var_2 = 1696669895160224908ULL;
unsigned char var_4 = (unsigned char)3;
_Bool var_5 = (_Bool)1;
long long int var_6 = 4436681607156148167LL;
unsigned char var_7 = (unsigned char)212;
unsigned short var_8 = (unsigned short)11655;
unsigned char var_10 = (unsigned char)173;
unsigned short var_12 = (unsigned short)41051;
_Bool var_13 = (_Bool)0;
int zero = 0;
unsigned char var_18 = (unsigned char)2;
signed char var_19 = (signed char)89;
unsigned int var_20 = 1529690330U;
signed char var_21 = (signed char)-36;
unsigned short var_22 = (unsigned short)63575;
unsigned int var_23 = 2477926859U;
unsigned int var_24 = 2533055460U;
unsigned char var_25 = (unsigned char)35;
short var_26 = (short)11452;
signed char var_27 = (signed char)99;
signed char arr_0 [25] ;
short arr_1 [25] [25] ;
unsigned int arr_2 [25] ;
_Bool arr_3 [25] [25] ;
unsigned char arr_6 [11] ;
signed char arr_7 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_0 [i_0] = (signed char)109;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_1 [i_0] [i_1] = (short)4638;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_2 [i_0] = 969826761U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_3 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_6 [i_0] = (unsigned char)186;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_7 [i_0] = (signed char)-37;
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
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
