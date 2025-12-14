#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1266046730;
unsigned char var_9 = (unsigned char)163;
unsigned char var_11 = (unsigned char)21;
int zero = 0;
unsigned int var_18 = 3329086253U;
unsigned int var_19 = 2858951295U;
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
