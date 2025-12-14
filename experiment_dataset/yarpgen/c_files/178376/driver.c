#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)17290;
long long int var_9 = -1401479835106826414LL;
short var_10 = (short)8449;
int zero = 0;
unsigned char var_15 = (unsigned char)174;
long long int var_16 = 334796436316253712LL;
short var_17 = (short)-14621;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
