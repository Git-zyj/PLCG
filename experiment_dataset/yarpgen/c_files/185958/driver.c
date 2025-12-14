#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)80;
signed char var_2 = (signed char)66;
signed char var_9 = (signed char)21;
short var_10 = (short)-6195;
int var_13 = 644598125;
int zero = 0;
short var_15 = (short)-26382;
short var_16 = (short)-16980;
short var_17 = (short)9142;
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
