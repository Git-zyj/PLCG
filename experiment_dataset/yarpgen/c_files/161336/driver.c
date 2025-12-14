#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 7348211416510477046ULL;
unsigned char var_5 = (unsigned char)235;
unsigned int var_7 = 528659148U;
signed char var_13 = (signed char)-95;
long long int var_14 = -6292155143354270456LL;
int zero = 0;
short var_15 = (short)-20967;
unsigned char var_16 = (unsigned char)14;
unsigned short var_17 = (unsigned short)36157;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
