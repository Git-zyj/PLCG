#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -458077278;
unsigned char var_10 = (unsigned char)115;
int zero = 0;
unsigned long long int var_16 = 6659372379193751574ULL;
unsigned short var_17 = (unsigned short)44252;
unsigned char var_18 = (unsigned char)46;
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
