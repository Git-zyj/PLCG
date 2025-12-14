#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)-39;
short var_6 = (short)25288;
long long int var_12 = -2635807176482269923LL;
signed char var_15 = (signed char)100;
int zero = 0;
int var_16 = 2126676945;
int var_17 = -1210690165;
unsigned short var_18 = (unsigned short)6417;
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
