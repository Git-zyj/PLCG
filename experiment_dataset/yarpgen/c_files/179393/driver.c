#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)118;
short var_2 = (short)-27720;
unsigned long long int var_8 = 14581945100080179883ULL;
int var_11 = -1601459166;
unsigned char var_13 = (unsigned char)197;
int zero = 0;
unsigned char var_16 = (unsigned char)79;
short var_17 = (short)-4112;
long long int var_18 = -2731648452346839602LL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
