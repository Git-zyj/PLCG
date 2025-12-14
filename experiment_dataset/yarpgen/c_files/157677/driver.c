#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 873312881U;
unsigned char var_1 = (unsigned char)67;
unsigned char var_3 = (unsigned char)85;
unsigned int var_5 = 2467177879U;
long long int var_7 = 2328070684197125179LL;
unsigned char var_10 = (unsigned char)18;
unsigned long long int var_11 = 10002739785351193111ULL;
long long int var_12 = 8054902178206488207LL;
int zero = 0;
unsigned int var_13 = 766418136U;
unsigned long long int var_14 = 2278977234135951642ULL;
unsigned int var_15 = 1818273889U;
short var_16 = (short)26923;
unsigned int var_17 = 37917306U;
signed char var_18 = (signed char)-61;
long long int var_19 = 1818721081446685566LL;
short var_20 = (short)-3897;
signed char var_21 = (signed char)-102;
short var_22 = (short)2904;
long long int var_23 = -8454709131506813793LL;
signed char arr_0 [15] ;
signed char arr_1 [15] ;
unsigned int arr_2 [15] [15] [15] ;
short arr_3 [15] ;
long long int arr_5 [15] [15] [15] [15] ;
unsigned int arr_4 [15] ;
int arr_7 [15] [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_0 [i_0] = (signed char)-12;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_1 [i_0] = (signed char)2;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = 1713063044U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_3 [i_0] = (short)-22745;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    arr_5 [i_0] [i_1] [i_2] [i_3] = 1396203582268149093LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_4 [i_0] = 1169667007U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = -1807153416;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                hash(&seed, arr_7 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
