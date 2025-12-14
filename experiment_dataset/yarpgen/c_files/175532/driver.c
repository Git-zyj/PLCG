#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_5 = 7524746244341127993ULL;
unsigned char var_7 = (unsigned char)147;
short var_10 = (short)-30100;
int zero = 0;
int var_14 = 834264841;
unsigned char var_15 = (unsigned char)231;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
