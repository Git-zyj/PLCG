#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 7906788570293091865ULL;
unsigned long long int var_8 = 8653022025677690454ULL;
unsigned char var_12 = (unsigned char)126;
int zero = 0;
unsigned char var_15 = (unsigned char)6;
unsigned long long int var_16 = 1935478727973176459ULL;
unsigned long long int var_17 = 6684614290351367741ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
