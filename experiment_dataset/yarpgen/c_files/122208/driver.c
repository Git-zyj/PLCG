#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1674667110;
signed char var_13 = (signed char)-23;
unsigned long long int var_16 = 8648660371376908754ULL;
int zero = 0;
unsigned short var_17 = (unsigned short)49181;
signed char var_18 = (signed char)59;
void init() {
}

void checksum() {
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
