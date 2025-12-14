#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)19526;
unsigned long long int var_4 = 13798167566038753334ULL;
short var_8 = (short)-33;
_Bool var_10 = (_Bool)1;
unsigned long long int var_11 = 17249200692581847712ULL;
unsigned short var_12 = (unsigned short)34900;
unsigned short var_14 = (unsigned short)34340;
int zero = 0;
unsigned char var_15 = (unsigned char)152;
unsigned long long int var_16 = 13620221335674349236ULL;
unsigned short var_17 = (unsigned short)25402;
_Bool var_18 = (_Bool)0;
signed char var_19 = (signed char)72;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
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
