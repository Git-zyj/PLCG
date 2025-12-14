#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-123;
short var_3 = (short)-610;
unsigned long long int var_9 = 10119721123871999600ULL;
signed char var_11 = (signed char)-69;
unsigned short var_14 = (unsigned short)28600;
int zero = 0;
unsigned short var_16 = (unsigned short)21328;
short var_17 = (short)-25408;
unsigned short var_18 = (unsigned short)12495;
long long int var_19 = 2486192641828536710LL;
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
