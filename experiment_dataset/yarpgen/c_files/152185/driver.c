#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)35670;
int var_7 = -1638267717;
unsigned char var_11 = (unsigned char)3;
signed char var_14 = (signed char)-61;
int zero = 0;
short var_18 = (short)-1552;
unsigned int var_19 = 371907229U;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
