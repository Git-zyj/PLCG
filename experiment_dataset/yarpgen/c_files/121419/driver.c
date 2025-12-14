#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -1010970517749884423LL;
unsigned char var_10 = (unsigned char)17;
int zero = 0;
signed char var_17 = (signed char)-70;
short var_18 = (short)2881;
signed char var_19 = (signed char)-6;
unsigned char var_20 = (unsigned char)227;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
