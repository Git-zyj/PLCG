#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -1885698350;
short var_5 = (short)9733;
unsigned char var_8 = (unsigned char)142;
_Bool var_10 = (_Bool)1;
int zero = 0;
int var_15 = -399846250;
int var_16 = -176777000;
int var_17 = -1546962661;
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
