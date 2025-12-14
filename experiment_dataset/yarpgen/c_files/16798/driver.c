#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)34086;
short var_11 = (short)-14203;
signed char var_15 = (signed char)-42;
int zero = 0;
unsigned short var_18 = (unsigned short)46272;
unsigned char var_19 = (unsigned char)181;
unsigned int var_20 = 151017022U;
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
