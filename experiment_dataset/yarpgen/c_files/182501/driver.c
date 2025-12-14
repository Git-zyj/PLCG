#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1829712950;
unsigned int var_3 = 1399918415U;
unsigned char var_4 = (unsigned char)131;
int var_5 = 1885386881;
int var_6 = -1086277272;
unsigned int var_8 = 1289940240U;
unsigned char var_9 = (unsigned char)141;
unsigned int var_11 = 202512850U;
int zero = 0;
signed char var_14 = (signed char)43;
unsigned char var_15 = (unsigned char)6;
unsigned char var_16 = (unsigned char)105;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
