#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 6876363716887271076ULL;
unsigned char var_3 = (unsigned char)4;
short var_6 = (short)-5165;
int zero = 0;
short var_20 = (short)6697;
unsigned int var_21 = 2074047857U;
long long int var_22 = -8539370365499250910LL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
