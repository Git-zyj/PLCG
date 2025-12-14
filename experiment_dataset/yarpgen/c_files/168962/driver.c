#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-33;
int var_6 = -1780493319;
unsigned long long int var_7 = 11113033428372899345ULL;
unsigned long long int var_8 = 13894293220674423306ULL;
unsigned char var_10 = (unsigned char)246;
int zero = 0;
unsigned long long int var_14 = 9130380622424659615ULL;
unsigned int var_15 = 3209706562U;
void init() {
}

void checksum() {
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
