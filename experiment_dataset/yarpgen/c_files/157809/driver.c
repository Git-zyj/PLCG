#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 1051618025U;
short var_5 = (short)-30581;
unsigned long long int var_12 = 15278658464787060075ULL;
unsigned long long int var_13 = 14222694342027964511ULL;
int zero = 0;
short var_17 = (short)26759;
unsigned char var_18 = (unsigned char)235;
void init() {
}

void checksum() {
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
