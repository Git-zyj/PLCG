#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)182;
signed char var_4 = (signed char)67;
unsigned char var_5 = (unsigned char)111;
unsigned char var_7 = (unsigned char)161;
unsigned char var_8 = (unsigned char)84;
int zero = 0;
unsigned short var_11 = (unsigned short)28041;
short var_12 = (short)128;
signed char var_13 = (signed char)31;
signed char var_14 = (signed char)-89;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
