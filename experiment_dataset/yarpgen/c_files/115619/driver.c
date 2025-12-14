#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)500;
long long int var_7 = -1860794890957853145LL;
long long int var_10 = -1087980627735524162LL;
int zero = 0;
unsigned char var_14 = (unsigned char)19;
short var_15 = (short)-9324;
int var_16 = 434216181;
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
