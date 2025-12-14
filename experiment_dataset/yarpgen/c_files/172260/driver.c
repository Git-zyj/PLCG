#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned long long int var_4 = 14820984848975996390ULL;
short var_6 = (short)-23131;
int var_8 = -561850013;
long long int var_11 = -6424519100474626642LL;
int zero = 0;
unsigned char var_13 = (unsigned char)94;
unsigned long long int var_14 = 14215704366523944394ULL;
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
