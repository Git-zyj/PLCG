#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 4910212616363579173ULL;
signed char var_1 = (signed char)99;
unsigned short var_3 = (unsigned short)63735;
int zero = 0;
unsigned short var_13 = (unsigned short)9713;
short var_14 = (short)-1932;
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
