#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-20130;
signed char var_2 = (signed char)37;
short var_3 = (short)-1949;
short var_4 = (short)11030;
long long int var_6 = 4765514230040661715LL;
signed char var_8 = (signed char)1;
unsigned char var_9 = (unsigned char)42;
signed char var_11 = (signed char)-108;
short var_12 = (short)6056;
int zero = 0;
short var_14 = (short)-9254;
short var_15 = (short)24020;
unsigned int var_16 = 3519446996U;
signed char var_17 = (signed char)-54;
signed char var_18 = (signed char)53;
_Bool var_19 = (_Bool)0;
short var_20 = (short)-5629;
short var_21 = (short)-24085;
unsigned int arr_2 [25] [25] ;
unsigned char arr_6 [13] [13] [13] ;
signed char arr_8 [13] ;
unsigned long long int arr_10 [13] [13] [13] [13] ;
long long int arr_3 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_2 [i_0] [i_1] = 2313863810U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (unsigned char)26 : (unsigned char)16;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_8 [i_0] = (signed char)-94;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    arr_10 [i_0] [i_1] [i_2] [i_3] = 10964602700778340038ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? -7877279010340453433LL : -5064613831055313216LL;
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
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
