#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)79;
signed char var_9 = (signed char)40;
signed char var_12 = (signed char)-53;
int zero = 0;
unsigned int var_16 = 772197699U;
unsigned char var_17 = (unsigned char)44;
int var_18 = 1322222673;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
