#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)113;
short var_6 = (short)6560;
short var_9 = (short)-3315;
unsigned char var_12 = (unsigned char)17;
unsigned char var_13 = (unsigned char)142;
int zero = 0;
signed char var_14 = (signed char)47;
unsigned char var_15 = (unsigned char)182;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
