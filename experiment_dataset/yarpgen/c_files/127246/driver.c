#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)4907;
unsigned char var_15 = (unsigned char)133;
int zero = 0;
short var_16 = (short)3828;
short var_17 = (short)-4493;
unsigned long long int var_18 = 14078577718073502733ULL;
unsigned char var_19 = (unsigned char)160;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
