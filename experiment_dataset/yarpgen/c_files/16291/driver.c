#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 1974413432;
unsigned int var_9 = 4279276505U;
unsigned char var_14 = (unsigned char)199;
signed char var_15 = (signed char)42;
unsigned long long int var_17 = 12273818412620088067ULL;
int zero = 0;
signed char var_18 = (signed char)90;
int var_19 = 895085504;
void init() {
}

void checksum() {
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
