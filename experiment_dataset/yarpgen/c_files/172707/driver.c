#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 11273253731030050474ULL;
unsigned short var_7 = (unsigned short)59798;
unsigned short var_14 = (unsigned short)28831;
short var_15 = (short)24232;
int zero = 0;
short var_20 = (short)-12343;
unsigned short var_21 = (unsigned short)53095;
unsigned long long int var_22 = 7155850113879486552ULL;
short var_23 = (short)-29686;
unsigned long long int var_24 = 18434346833315138215ULL;
unsigned long long int arr_1 [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_1 [i_0] [i_1] = 9454008693719105139ULL;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
