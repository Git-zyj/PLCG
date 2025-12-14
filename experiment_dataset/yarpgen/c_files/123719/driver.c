#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_7 = 3170107903097458784ULL;
unsigned short var_8 = (unsigned short)14857;
int zero = 0;
unsigned long long int var_13 = 10506489285826427958ULL;
unsigned long long int var_14 = 2029428971990559946ULL;
void init() {
}

void checksum() {
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
