#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)58059;
unsigned short var_1 = (unsigned short)54185;
unsigned char var_7 = (unsigned char)182;
_Bool var_10 = (_Bool)0;
_Bool var_12 = (_Bool)1;
int zero = 0;
unsigned char var_13 = (unsigned char)125;
long long int var_14 = -5864174897032466877LL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
