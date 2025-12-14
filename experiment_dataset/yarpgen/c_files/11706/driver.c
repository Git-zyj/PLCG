#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)65199;
unsigned long long int var_1 = 15193484787755349536ULL;
unsigned int var_5 = 2745657193U;
unsigned short var_6 = (unsigned short)43630;
unsigned short var_7 = (unsigned short)24246;
long long int var_8 = -401047330750207091LL;
short var_9 = (short)30730;
int var_11 = -1530406511;
int zero = 0;
long long int var_12 = 3095318679306932917LL;
unsigned int var_13 = 3966913510U;
_Bool var_14 = (_Bool)1;
long long int var_15 = 3663457867889712953LL;
unsigned char var_16 = (unsigned char)177;
unsigned long long int var_17 = 17909382452588459541ULL;
signed char var_18 = (signed char)42;
long long int var_19 = 5325334577264612670LL;
unsigned int var_20 = 3499600107U;
unsigned long long int arr_0 [21] ;
long long int arr_2 [21] ;
long long int arr_3 [21] [21] ;
int arr_4 [21] [21] [21] ;
int arr_6 [21] [21] ;
unsigned short arr_9 [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_0 [i_0] = 6145443347517020165ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_2 [i_0] = 80419136104692536LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_3 [i_0] [i_1] = -550111882449268972LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 341458766 : 199453555;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_6 [i_0] [i_1] = -1312809093;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_9 [i_0] [i_1] = (unsigned short)34703;
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
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
