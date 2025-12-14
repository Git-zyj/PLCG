#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)173;
_Bool var_2 = (_Bool)0;
_Bool var_3 = (_Bool)0;
int var_4 = 1363328381;
short var_5 = (short)-23563;
unsigned long long int var_8 = 4185360674741664142ULL;
int var_15 = -1743862420;
short var_17 = (short)-23086;
int zero = 0;
int var_19 = -1656531109;
_Bool var_20 = (_Bool)0;
unsigned char var_21 = (unsigned char)182;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
