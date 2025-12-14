#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_6 = (unsigned short)45187;
long long int var_8 = 10151224720008023LL;
unsigned short var_12 = (unsigned short)20995;
int zero = 0;
unsigned short var_14 = (unsigned short)31844;
long long int var_15 = -7138136493145694260LL;
int var_16 = -264687875;
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
