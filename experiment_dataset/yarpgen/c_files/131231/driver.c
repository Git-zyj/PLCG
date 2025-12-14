#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)2721;
unsigned char var_4 = (unsigned char)57;
unsigned char var_7 = (unsigned char)128;
signed char var_8 = (signed char)126;
unsigned char var_11 = (unsigned char)13;
int zero = 0;
unsigned int var_19 = 2966553300U;
short var_20 = (short)-9618;
void init() {
}

void checksum() {
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
