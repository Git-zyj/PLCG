#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)25974;
unsigned char var_1 = (unsigned char)16;
short var_2 = (short)-3548;
unsigned int var_4 = 1468292440U;
unsigned long long int var_7 = 13287847825871054953ULL;
unsigned int var_11 = 760625551U;
unsigned long long int var_12 = 7920663317240928918ULL;
_Bool var_17 = (_Bool)1;
unsigned char var_18 = (unsigned char)108;
short var_19 = (short)10458;
int zero = 0;
unsigned long long int var_20 = 8491409395293813547ULL;
unsigned long long int var_21 = 4333280073280239116ULL;
unsigned long long int var_22 = 2980828598798667350ULL;
long long int var_23 = 6550367439969195810LL;
short var_24 = (short)11002;
unsigned char var_25 = (unsigned char)120;
unsigned char arr_0 [23] [23] ;
long long int arr_1 [23] [23] ;
unsigned int arr_3 [23] [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned char)60;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_1 [i_0] [i_1] = -2894714957216802122LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = 1998485031U;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
