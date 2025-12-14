#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)30810;
unsigned long long int var_7 = 6049586036641676490ULL;
signed char var_8 = (signed char)-102;
int zero = 0;
unsigned long long int var_10 = 7604382880074257666ULL;
short var_11 = (short)-7618;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
