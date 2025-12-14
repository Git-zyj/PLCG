#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)55;
int var_4 = -1724024916;
short var_7 = (short)-25769;
unsigned long long int var_8 = 10724675884876775307ULL;
unsigned long long int var_9 = 4303691085733620207ULL;
int var_12 = -1622769095;
int var_14 = 1821943583;
int zero = 0;
int var_16 = 1485018384;
unsigned int var_17 = 3009745794U;
int var_18 = 1149113790;
signed char var_19 = (signed char)-4;
unsigned char var_20 = (unsigned char)139;
void init() {
}

void checksum() {
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
