#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_6 = -6580019145674328293LL;
long long int var_8 = 1321648041759471674LL;
int zero = 0;
unsigned short var_15 = (unsigned short)37451;
unsigned short var_16 = (unsigned short)17778;
short var_17 = (short)-22949;
signed char var_18 = (signed char)2;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
