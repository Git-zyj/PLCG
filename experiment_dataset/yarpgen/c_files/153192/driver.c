#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1456846616;
signed char var_2 = (signed char)80;
int var_3 = -2141454612;
unsigned long long int var_4 = 15193489073687232946ULL;
int zero = 0;
unsigned char var_10 = (unsigned char)133;
int var_11 = -350950132;
unsigned short var_12 = (unsigned short)29459;
unsigned long long int var_13 = 15602174319945382693ULL;
unsigned int var_14 = 1866612032U;
unsigned short arr_1 [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned short)42411;
}

void checksum() {
    hash(&seed, var_10);
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
