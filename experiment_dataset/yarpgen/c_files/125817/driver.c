#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 947863859;
unsigned char var_3 = (unsigned char)47;
signed char var_9 = (signed char)97;
int var_10 = -1798573985;
short var_12 = (short)21451;
int zero = 0;
long long int var_17 = 4128163365229993404LL;
unsigned char var_18 = (unsigned char)25;
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
