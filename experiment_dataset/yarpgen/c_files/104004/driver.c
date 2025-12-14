#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)142;
int var_4 = -873635549;
_Bool var_5 = (_Bool)0;
unsigned int var_6 = 1391616070U;
int var_9 = -1766229020;
short var_14 = (short)-5444;
unsigned int var_18 = 3882671188U;
int zero = 0;
int var_19 = -804194301;
unsigned long long int var_20 = 723163316627035594ULL;
unsigned char var_21 = (unsigned char)204;
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
