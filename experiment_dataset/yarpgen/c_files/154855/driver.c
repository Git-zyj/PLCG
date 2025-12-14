#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)24;
unsigned char var_4 = (unsigned char)105;
unsigned short var_7 = (unsigned short)54671;
short var_9 = (short)-17870;
int zero = 0;
signed char var_11 = (signed char)70;
unsigned int var_12 = 4206300274U;
short var_13 = (short)16342;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
