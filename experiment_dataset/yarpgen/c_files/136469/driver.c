#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -1189334845;
unsigned int var_5 = 2451745730U;
int var_7 = -1572167592;
unsigned int var_10 = 647607764U;
unsigned char var_12 = (unsigned char)24;
unsigned char var_13 = (unsigned char)165;
int zero = 0;
unsigned int var_15 = 686401944U;
int var_16 = -1889854694;
long long int var_17 = -5499664746654604537LL;
int var_18 = 659705795;
long long int var_19 = 5081432877984280039LL;
unsigned int var_20 = 194247561U;
_Bool arr_0 [14] ;
long long int arr_2 [14] [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_0 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = -268335490517228355LL;
}

void checksum() {
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
