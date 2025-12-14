#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)62369;
unsigned short var_1 = (unsigned short)45555;
unsigned char var_3 = (unsigned char)244;
unsigned short var_6 = (unsigned short)39961;
unsigned char var_7 = (unsigned char)168;
int var_15 = 1339203836;
int zero = 0;
short var_16 = (short)15895;
short var_17 = (short)-10641;
_Bool var_18 = (_Bool)0;
void init() {
}

void checksum() {
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
