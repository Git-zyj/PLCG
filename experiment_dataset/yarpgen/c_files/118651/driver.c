#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_7 = (short)28548;
unsigned short var_8 = (unsigned short)2824;
int zero = 0;
unsigned long long int var_10 = 11151014977167658863ULL;
unsigned long long int var_11 = 16418224242239034757ULL;
long long int var_12 = -1659920136718220354LL;
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
