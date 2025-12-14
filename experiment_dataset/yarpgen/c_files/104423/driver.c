#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 4469236653118665617ULL;
signed char var_4 = (signed char)120;
unsigned int var_9 = 2847371725U;
int zero = 0;
unsigned long long int var_15 = 538411639430507691ULL;
unsigned int var_16 = 662953442U;
unsigned char var_17 = (unsigned char)218;
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
