#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_6 = 2134922153047404678LL;
unsigned short var_10 = (unsigned short)18476;
short var_13 = (short)-17735;
unsigned short var_15 = (unsigned short)32911;
int zero = 0;
unsigned short var_18 = (unsigned short)31291;
unsigned short var_19 = (unsigned short)60884;
int var_20 = 1769546712;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
