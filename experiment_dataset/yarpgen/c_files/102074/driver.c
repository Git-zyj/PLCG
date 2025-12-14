#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-50;
short var_4 = (short)-26543;
signed char var_9 = (signed char)-123;
signed char var_12 = (signed char)-119;
short var_14 = (short)32033;
unsigned char var_16 = (unsigned char)148;
short var_17 = (short)-13126;
int zero = 0;
unsigned int var_19 = 3201696242U;
unsigned char var_20 = (unsigned char)160;
signed char var_21 = (signed char)-101;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
