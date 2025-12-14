#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 8233536560819415791LL;
unsigned long long int var_2 = 1641710364251884098ULL;
long long int var_6 = 6740019902339692298LL;
long long int var_8 = 6596052807168121832LL;
short var_9 = (short)-6542;
long long int var_10 = 2413997604701947069LL;
long long int var_13 = -1749674311519333162LL;
signed char var_15 = (signed char)-73;
int zero = 0;
short var_17 = (short)30035;
unsigned short var_18 = (unsigned short)61263;
unsigned char var_19 = (unsigned char)51;
unsigned short arr_9 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_9 [i_0] = (i_0 % 2 == 0) ? (unsigned short)23391 : (unsigned short)10044;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_9 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
