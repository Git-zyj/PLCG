#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 11149113971700484184ULL;
unsigned char var_5 = (unsigned char)193;
_Bool var_7 = (_Bool)0;
unsigned short var_8 = (unsigned short)31508;
int zero = 0;
unsigned short var_14 = (unsigned short)54383;
int var_15 = 1985353846;
short var_16 = (short)-14818;
unsigned int var_17 = 2417778777U;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
