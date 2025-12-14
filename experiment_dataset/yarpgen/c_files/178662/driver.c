#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_7 = (unsigned short)13596;
unsigned char var_8 = (unsigned char)209;
unsigned char var_11 = (unsigned char)145;
signed char var_16 = (signed char)53;
unsigned short var_17 = (unsigned short)44560;
int zero = 0;
unsigned char var_18 = (unsigned char)160;
unsigned char var_19 = (unsigned char)82;
long long int var_20 = -4731967704411783770LL;
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
