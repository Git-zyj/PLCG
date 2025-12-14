#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)152;
unsigned char var_5 = (unsigned char)232;
int var_6 = 2098182347;
long long int var_7 = 5391184816796335873LL;
unsigned int var_9 = 3617190807U;
signed char var_10 = (signed char)-111;
signed char var_11 = (signed char)49;
int zero = 0;
int var_13 = 885987318;
signed char var_14 = (signed char)21;
short var_15 = (short)21779;
unsigned char var_16 = (unsigned char)26;
short var_17 = (short)-1821;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
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
