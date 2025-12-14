#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)38485;
unsigned char var_3 = (unsigned char)85;
signed char var_4 = (signed char)109;
int var_5 = -1732018216;
unsigned short var_6 = (unsigned short)28734;
int var_11 = 1865924519;
int zero = 0;
unsigned short var_13 = (unsigned short)46860;
unsigned int var_14 = 3655172554U;
unsigned int var_15 = 1046585920U;
unsigned short var_16 = (unsigned short)52812;
unsigned short var_17 = (unsigned short)19221;
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
