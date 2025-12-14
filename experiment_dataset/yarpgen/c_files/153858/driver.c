#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -407981460;
unsigned char var_5 = (unsigned char)161;
signed char var_6 = (signed char)-127;
unsigned int var_9 = 3295762918U;
signed char var_16 = (signed char)47;
int zero = 0;
unsigned short var_17 = (unsigned short)5879;
unsigned short var_18 = (unsigned short)14715;
unsigned int var_19 = 853473072U;
short var_20 = (short)-32065;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
