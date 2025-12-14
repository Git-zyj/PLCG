#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)62;
short var_4 = (short)-21330;
unsigned short var_5 = (unsigned short)55829;
int var_7 = 1164613848;
int var_9 = -336963485;
unsigned short var_10 = (unsigned short)3886;
int zero = 0;
short var_12 = (short)-30324;
long long int var_13 = 8426670722949096063LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
