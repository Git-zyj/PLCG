#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -269123920;
int var_2 = -2083262984;
short var_5 = (short)13777;
unsigned int var_9 = 498212166U;
int zero = 0;
unsigned int var_10 = 569379526U;
int var_11 = -274968429;
unsigned int var_12 = 2426772795U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
