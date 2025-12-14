#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2369042728U;
signed char var_1 = (signed char)65;
long long int var_3 = 6489890061847412107LL;
int var_6 = 844742568;
int var_8 = -662300029;
int var_9 = -1884580368;
unsigned int var_11 = 2627719405U;
long long int var_15 = 1156798009431720272LL;
int zero = 0;
signed char var_16 = (signed char)33;
long long int var_17 = -2122019589140465183LL;
unsigned int var_18 = 3433695060U;
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
