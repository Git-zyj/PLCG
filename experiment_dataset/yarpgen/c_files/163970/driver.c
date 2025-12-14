#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 2210869564242684244LL;
long long int var_2 = 5726647577141480514LL;
unsigned int var_8 = 3308616474U;
unsigned int var_10 = 2386375484U;
unsigned int var_11 = 3720869150U;
unsigned char var_12 = (unsigned char)236;
unsigned long long int var_15 = 15448555928614948953ULL;
int zero = 0;
unsigned char var_16 = (unsigned char)97;
signed char var_17 = (signed char)65;
unsigned int var_18 = 3701531318U;
unsigned int var_19 = 2674857862U;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
