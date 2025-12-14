#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_7 = (short)14758;
int var_8 = -1664048561;
unsigned short var_10 = (unsigned short)42422;
unsigned long long int var_16 = 7188283837291374220ULL;
unsigned short var_18 = (unsigned short)51827;
int zero = 0;
int var_19 = -1032340708;
unsigned short var_20 = (unsigned short)17653;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
