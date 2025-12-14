#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)25015;
short var_2 = (short)13036;
signed char var_3 = (signed char)-118;
int var_5 = -501161238;
unsigned char var_6 = (unsigned char)108;
unsigned short var_8 = (unsigned short)26929;
unsigned short var_9 = (unsigned short)12266;
int zero = 0;
int var_11 = -30695804;
unsigned char var_12 = (unsigned char)186;
unsigned short var_13 = (unsigned short)51910;
unsigned int var_14 = 3665914650U;
_Bool var_15 = (_Bool)1;
int var_16 = 1863362044;
unsigned int var_17 = 1386183839U;
unsigned long long int var_18 = 9183511679967590733ULL;
unsigned short var_19 = (unsigned short)23645;
short var_20 = (short)-18250;
unsigned short var_21 = (unsigned short)31947;
unsigned char var_22 = (unsigned char)242;
int var_23 = -463232026;
signed char var_24 = (signed char)32;
unsigned char var_25 = (unsigned char)132;
_Bool arr_1 [11] [11] ;
_Bool arr_2 [11] [11] [11] ;
unsigned short arr_3 [11] [11] [11] ;
unsigned short arr_4 [11] [11] ;
signed char arr_6 [11] [11] [11] ;
long long int arr_8 [15] ;
signed char arr_10 [10] ;
unsigned int arr_11 [10] ;
_Bool arr_13 [10] ;
unsigned int arr_7 [11] ;
unsigned char arr_12 [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_1 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (unsigned short)26807;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_4 [i_0] [i_1] = (unsigned short)47007;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (signed char)62;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_8 [i_0] = -91248032444730493LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_10 [i_0] = (signed char)-13;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_11 [i_0] = (i_0 % 2 == 0) ? 3652160390U : 2075362658U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_13 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_7 [i_0] = 349927380U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_12 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned char)134 : (unsigned char)146;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_12 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
