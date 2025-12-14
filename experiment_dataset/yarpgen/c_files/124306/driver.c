#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)155;
unsigned short var_2 = (unsigned short)51966;
int var_3 = 1942317446;
unsigned int var_4 = 1128242529U;
unsigned int var_6 = 2288044382U;
int var_15 = -956023026;
int zero = 0;
short var_20 = (short)-12959;
signed char var_21 = (signed char)-52;
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
