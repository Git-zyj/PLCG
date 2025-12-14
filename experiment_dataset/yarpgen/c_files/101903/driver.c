#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)0;
long long int var_5 = -6268671138000239399LL;
_Bool var_6 = (_Bool)0;
unsigned short var_13 = (unsigned short)37729;
int var_16 = 603695120;
int zero = 0;
unsigned char var_17 = (unsigned char)38;
unsigned char var_18 = (unsigned char)142;
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
