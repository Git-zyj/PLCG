#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_6 = -7273205486712828388LL;
unsigned char var_12 = (unsigned char)225;
int var_14 = 1962570840;
int zero = 0;
unsigned char var_19 = (unsigned char)136;
int var_20 = -1454695026;
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
