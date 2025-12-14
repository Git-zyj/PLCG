#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)18;
long long int var_1 = 6290400507145785295LL;
unsigned int var_2 = 2431144314U;
unsigned char var_3 = (unsigned char)80;
unsigned int var_6 = 1475207901U;
long long int var_7 = 542621378357755921LL;
signed char var_9 = (signed char)26;
signed char var_10 = (signed char)(-127 - 1);
unsigned int var_12 = 2558710867U;
int zero = 0;
unsigned int var_13 = 1929613674U;
unsigned char var_14 = (unsigned char)57;
unsigned int var_15 = 3327600120U;
short var_16 = (short)-12992;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
