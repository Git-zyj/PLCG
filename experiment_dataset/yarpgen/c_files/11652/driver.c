#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_6 = 1558670949;
unsigned long long int var_7 = 6501714974716000658ULL;
unsigned char var_9 = (unsigned char)1;
unsigned int var_15 = 3464231398U;
int zero = 0;
int var_16 = 1095332006;
unsigned int var_17 = 1394200678U;
short var_18 = (short)22592;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
