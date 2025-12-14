#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_5 = (unsigned short)11903;
short var_9 = (short)1473;
short var_12 = (short)-20510;
signed char var_15 = (signed char)-84;
signed char var_16 = (signed char)13;
int zero = 0;
unsigned char var_20 = (unsigned char)159;
short var_21 = (short)-26467;
void init() {
}

void checksum() {
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
