#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_7 = (short)-2787;
unsigned short var_14 = (unsigned short)23919;
unsigned short var_17 = (unsigned short)13589;
unsigned short var_19 = (unsigned short)62721;
int zero = 0;
unsigned int var_20 = 2272637977U;
short var_21 = (short)-1705;
unsigned short var_22 = (unsigned short)32667;
long long int var_23 = 6606831236116942455LL;
unsigned short arr_0 [19] ;
long long int arr_1 [19] ;
unsigned long long int arr_2 [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_0 [i_0] = (unsigned short)60779;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_1 [i_0] = -4308224986213108483LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_2 [i_0] [i_1] = 5415344502082398082ULL;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
