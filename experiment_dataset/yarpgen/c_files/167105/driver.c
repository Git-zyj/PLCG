#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)140;
_Bool var_2 = (_Bool)0;
int var_3 = -451698271;
unsigned long long int var_5 = 684026789029767424ULL;
unsigned char var_7 = (unsigned char)15;
signed char var_8 = (signed char)2;
_Bool var_9 = (_Bool)1;
int var_10 = -1526096808;
unsigned short var_11 = (unsigned short)12283;
int zero = 0;
unsigned int var_12 = 3305901008U;
unsigned short var_13 = (unsigned short)59864;
signed char var_14 = (signed char)-112;
signed char var_15 = (signed char)-4;
unsigned short var_16 = (unsigned short)25876;
unsigned long long int var_17 = 11407910904046939781ULL;
int var_18 = -1975411239;
unsigned long long int var_19 = 4033150502430866864ULL;
unsigned short arr_0 [25] ;
_Bool arr_1 [25] [25] ;
_Bool arr_2 [25] [25] ;
_Bool arr_3 [23] ;
unsigned long long int arr_5 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_0 [i_0] = (unsigned short)59761;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_1 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_2 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_3 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? 16660337348317244800ULL : 10715347921221108263ULL;
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
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
