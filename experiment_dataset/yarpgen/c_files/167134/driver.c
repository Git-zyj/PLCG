#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)41923;
unsigned char var_1 = (unsigned char)94;
int var_2 = 338687667;
unsigned short var_3 = (unsigned short)26250;
long long int var_4 = 8375795115040748282LL;
long long int var_5 = 2395676980628953133LL;
unsigned char var_6 = (unsigned char)239;
unsigned short var_7 = (unsigned short)15765;
unsigned long long int var_10 = 1209796826059002214ULL;
int zero = 0;
unsigned int var_11 = 331134058U;
unsigned char var_12 = (unsigned char)235;
unsigned short var_13 = (unsigned short)59914;
unsigned int var_14 = 3704141004U;
unsigned char arr_0 [25] [25] ;
unsigned char arr_1 [25] ;
long long int arr_2 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned char)9;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_1 [i_0] = (unsigned char)145;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_2 [i_0] = -2820811397671132672LL;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
