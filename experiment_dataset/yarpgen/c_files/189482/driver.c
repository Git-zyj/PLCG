#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -732026583;
long long int var_5 = 3532536864017542133LL;
signed char var_6 = (signed char)-31;
int var_14 = -24059386;
int zero = 0;
short var_17 = (short)-6919;
unsigned short var_18 = (unsigned short)50955;
void init() {
}

void checksum() {
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
