#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)39;
short var_6 = (short)12239;
unsigned char var_7 = (unsigned char)57;
short var_9 = (short)-18928;
short var_12 = (short)19672;
int zero = 0;
unsigned char var_20 = (unsigned char)102;
unsigned int var_21 = 658106133U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
