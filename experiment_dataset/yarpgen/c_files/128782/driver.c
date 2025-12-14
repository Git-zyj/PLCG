#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)77;
unsigned long long int var_8 = 5648975203446895189ULL;
unsigned int var_9 = 2552140402U;
int zero = 0;
short var_11 = (short)-9475;
signed char var_12 = (signed char)89;
unsigned long long int var_13 = 9699560698688871996ULL;
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
