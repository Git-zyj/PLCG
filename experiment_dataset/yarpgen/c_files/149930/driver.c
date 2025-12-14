#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)13523;
int var_7 = -1251280961;
unsigned char var_8 = (unsigned char)162;
unsigned long long int var_10 = 1328485474560460645ULL;
long long int var_12 = -4045736970434623532LL;
int zero = 0;
short var_14 = (short)-16949;
unsigned long long int var_15 = 12478253597727530714ULL;
signed char var_16 = (signed char)33;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
