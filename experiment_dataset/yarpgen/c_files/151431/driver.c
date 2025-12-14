#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -582450599;
signed char var_8 = (signed char)64;
unsigned int var_9 = 3972815695U;
int zero = 0;
unsigned char var_13 = (unsigned char)23;
unsigned long long int var_14 = 13659627220865947893ULL;
int var_15 = -1268724049;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
