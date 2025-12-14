#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 2088922059U;
unsigned short var_5 = (unsigned short)39044;
signed char var_8 = (signed char)(-127 - 1);
signed char var_9 = (signed char)-36;
short var_10 = (short)-3594;
int zero = 0;
unsigned short var_12 = (unsigned short)29173;
unsigned char var_13 = (unsigned char)208;
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
