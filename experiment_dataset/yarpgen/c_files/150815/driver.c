#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1156159777;
unsigned long long int var_6 = 2516428458372127848ULL;
signed char var_7 = (signed char)74;
unsigned char var_11 = (unsigned char)41;
int var_12 = -77126711;
int zero = 0;
short var_16 = (short)5073;
signed char var_17 = (signed char)-39;
int var_18 = 1972099421;
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
