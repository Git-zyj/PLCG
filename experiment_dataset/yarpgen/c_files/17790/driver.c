#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)109;
signed char var_4 = (signed char)40;
unsigned long long int var_5 = 9215802966810223220ULL;
int zero = 0;
signed char var_11 = (signed char)55;
unsigned long long int var_12 = 12957959511348573009ULL;
unsigned char var_13 = (unsigned char)190;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
