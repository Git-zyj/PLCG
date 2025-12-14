#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)39;
signed char var_10 = (signed char)11;
short var_15 = (short)-32092;
int zero = 0;
unsigned char var_16 = (unsigned char)60;
short var_17 = (short)-28029;
signed char var_18 = (signed char)60;
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
