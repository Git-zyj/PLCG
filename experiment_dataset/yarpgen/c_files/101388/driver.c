#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_6 = 13590603172624057876ULL;
unsigned char var_8 = (unsigned char)198;
unsigned int var_10 = 959706142U;
int zero = 0;
short var_13 = (short)20312;
unsigned char var_14 = (unsigned char)226;
long long int var_15 = -7364629942853987115LL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
