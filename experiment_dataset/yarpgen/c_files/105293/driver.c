#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 843229710;
short var_6 = (short)-9562;
unsigned char var_13 = (unsigned char)43;
int zero = 0;
long long int var_14 = -6710145198706140452LL;
unsigned int var_15 = 3109161339U;
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
