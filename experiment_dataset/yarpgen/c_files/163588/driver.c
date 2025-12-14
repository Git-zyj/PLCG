#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 3541926510U;
unsigned long long int var_4 = 16888328755816974957ULL;
int var_11 = 1660265792;
int zero = 0;
long long int var_13 = -4172281824637436285LL;
unsigned char var_14 = (unsigned char)33;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
