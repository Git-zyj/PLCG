#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-8507;
unsigned long long int var_1 = 7488380438882477972ULL;
short var_3 = (short)-28654;
long long int var_7 = -4978902269830295491LL;
int zero = 0;
long long int var_19 = -6439689906022570109LL;
unsigned char var_20 = (unsigned char)157;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
