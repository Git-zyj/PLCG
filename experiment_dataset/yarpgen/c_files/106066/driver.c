#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_7 = 932002663217000132LL;
short var_8 = (short)-26679;
unsigned char var_12 = (unsigned char)228;
int zero = 0;
short var_15 = (short)-17299;
unsigned short var_16 = (unsigned short)52327;
int var_17 = 1600599440;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
