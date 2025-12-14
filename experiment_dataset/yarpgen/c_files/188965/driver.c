#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 8732453109866015921ULL;
unsigned long long int var_6 = 9827719104530841477ULL;
unsigned long long int var_7 = 15333418053491505537ULL;
unsigned long long int var_8 = 6186675982411302105ULL;
int zero = 0;
unsigned long long int var_16 = 16928607837785570057ULL;
unsigned long long int var_17 = 11317326250542053934ULL;
unsigned long long int var_18 = 7783626268955521923ULL;
unsigned long long int arr_0 [23] [23] ;
unsigned long long int arr_1 [23] ;
unsigned long long int arr_2 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_0 [i_0] [i_1] = (i_0 % 2 == 0) ? 3451708124917488760ULL : 14862398406842322496ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_1 [i_0] = 6191499420345921946ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? 18159368137736910922ULL : 16426634290852032623ULL;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
