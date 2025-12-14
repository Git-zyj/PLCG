#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 2092871931099624881LL;
unsigned int var_2 = 305810642U;
short var_9 = (short)-23474;
int zero = 0;
unsigned int var_20 = 88154676U;
unsigned long long int var_21 = 1045164233203371338ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
