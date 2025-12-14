#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 1705198878;
long long int var_4 = -4838464084763072532LL;
unsigned short var_5 = (unsigned short)16000;
int var_10 = -246806994;
unsigned char var_11 = (unsigned char)44;
unsigned int var_13 = 1555766829U;
int zero = 0;
int var_18 = -1594508235;
unsigned short var_19 = (unsigned short)29528;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
