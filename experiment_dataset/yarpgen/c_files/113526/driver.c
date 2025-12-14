#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 628847397;
unsigned char var_1 = (unsigned char)31;
int var_7 = -871889442;
unsigned long long int var_8 = 10617837136034182434ULL;
unsigned int var_9 = 2531403854U;
unsigned char var_10 = (unsigned char)69;
unsigned int var_11 = 3953141493U;
unsigned char var_13 = (unsigned char)238;
int zero = 0;
int var_15 = 1639350921;
int var_16 = -111039459;
unsigned short var_17 = (unsigned short)50158;
int arr_0 [14] ;
unsigned int arr_1 [14] ;
unsigned char arr_2 [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_0 [i_0] = 949187896;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_1 [i_0] = 1981664879U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned char)3;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
