#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 585954267U;
short var_9 = (short)3740;
unsigned long long int var_11 = 1232341275131122992ULL;
unsigned long long int var_15 = 1609109148675659473ULL;
signed char var_16 = (signed char)15;
int zero = 0;
unsigned short var_18 = (unsigned short)28678;
long long int var_19 = -1246189751923076732LL;
void init() {
}

void checksum() {
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
