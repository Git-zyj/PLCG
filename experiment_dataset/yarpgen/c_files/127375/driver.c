#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = 7763266176767043228LL;
unsigned short var_4 = (unsigned short)24437;
short var_12 = (short)-11493;
int zero = 0;
long long int var_17 = -1448151243868151495LL;
short var_18 = (short)6009;
unsigned char var_19 = (unsigned char)248;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
