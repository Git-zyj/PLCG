#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 7035918003057007137LL;
long long int var_3 = -6618067158610048730LL;
int var_8 = 505738999;
int zero = 0;
short var_10 = (short)-16253;
unsigned int var_11 = 1545972474U;
unsigned short var_12 = (unsigned short)65255;
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
