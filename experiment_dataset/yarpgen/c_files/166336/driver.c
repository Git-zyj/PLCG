#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 2875183715U;
long long int var_6 = -1751224273412860621LL;
long long int var_8 = 1798600638350605335LL;
int zero = 0;
unsigned short var_11 = (unsigned short)35127;
unsigned short var_12 = (unsigned short)9338;
void init() {
}

void checksum() {
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
