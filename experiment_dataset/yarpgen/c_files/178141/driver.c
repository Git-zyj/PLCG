#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 2544811927U;
unsigned int var_4 = 1789932939U;
short var_6 = (short)-15956;
unsigned char var_10 = (unsigned char)144;
int zero = 0;
signed char var_18 = (signed char)-3;
unsigned short var_19 = (unsigned short)8840;
short var_20 = (short)-6599;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
