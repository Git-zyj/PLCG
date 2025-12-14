#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)65008;
int var_3 = -1761693755;
unsigned char var_4 = (unsigned char)3;
unsigned short var_5 = (unsigned short)54970;
signed char var_6 = (signed char)-55;
unsigned char var_9 = (unsigned char)44;
int var_10 = -1833320363;
int zero = 0;
unsigned int var_12 = 1991636092U;
short var_13 = (short)-31914;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
