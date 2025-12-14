#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3209991806U;
signed char var_2 = (signed char)-73;
unsigned short var_4 = (unsigned short)61180;
signed char var_5 = (signed char)-33;
unsigned short var_6 = (unsigned short)45294;
int zero = 0;
short var_10 = (short)-6896;
short var_11 = (short)29195;
unsigned char var_12 = (unsigned char)195;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
