#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_7 = 1264829147U;
unsigned char var_8 = (unsigned char)94;
unsigned char var_13 = (unsigned char)188;
int zero = 0;
unsigned char var_14 = (unsigned char)27;
unsigned int var_15 = 807493975U;
unsigned int var_16 = 2879479422U;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
