#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_5 = (short)27918;
int var_9 = 1819175994;
unsigned short var_11 = (unsigned short)8986;
unsigned char var_14 = (unsigned char)155;
int zero = 0;
unsigned char var_15 = (unsigned char)71;
int var_16 = 2049915921;
long long int var_17 = -7029700241881733701LL;
unsigned short var_18 = (unsigned short)46551;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
