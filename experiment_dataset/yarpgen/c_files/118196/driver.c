#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -6848794680427265883LL;
unsigned int var_1 = 2337006156U;
unsigned long long int var_2 = 3935312916024968209ULL;
int var_5 = 537872353;
unsigned long long int var_6 = 4165440784423629400ULL;
unsigned char var_7 = (unsigned char)217;
unsigned char var_8 = (unsigned char)22;
signed char var_9 = (signed char)-40;
_Bool var_10 = (_Bool)0;
int var_11 = 556044983;
signed char var_12 = (signed char)43;
int zero = 0;
long long int var_14 = 6339269940013604005LL;
long long int var_15 = -4244882331464491480LL;
short var_16 = (short)-5332;
unsigned short var_17 = (unsigned short)4535;
unsigned short var_18 = (unsigned short)35375;
signed char var_19 = (signed char)-34;
long long int var_20 = 3302338643844535071LL;
long long int arr_0 [10] [10] ;
_Bool arr_1 [10] ;
int arr_2 [10] [10] ;
int arr_3 [10] [10] [10] ;
int arr_4 [10] ;
unsigned char arr_6 [10] [10] ;
unsigned long long int arr_9 [10] [10] [10] [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_0 [i_0] [i_1] = 6153950113600164267LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_1 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_2 [i_0] [i_1] = -1070298194;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 1357508961 : -709885021;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? -570377454 : -200658262;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_6 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned char)58 : (unsigned char)71;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 10; ++i_4) 
                        arr_9 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_2 % 2 == 0) ? 8368562061052937603ULL : 4061301206534388610ULL;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
