#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)119;
int var_4 = 1354726882;
unsigned short var_5 = (unsigned short)31118;
int var_6 = 855639662;
int zero = 0;
signed char var_11 = (signed char)94;
int var_12 = -105819851;
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
