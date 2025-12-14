#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)144;
int var_7 = 1101540016;
long long int var_8 = -321060846924759385LL;
int var_12 = 344462641;
int zero = 0;
short var_13 = (short)-6944;
_Bool var_14 = (_Bool)1;
unsigned char var_15 = (unsigned char)20;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
