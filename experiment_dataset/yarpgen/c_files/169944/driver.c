#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -175447871;
unsigned long long int var_2 = 12061374644484541340ULL;
unsigned long long int var_3 = 8038991448342656023ULL;
short var_4 = (short)-14305;
unsigned short var_10 = (unsigned short)8350;
unsigned short var_11 = (unsigned short)26632;
unsigned char var_12 = (unsigned char)58;
unsigned short var_13 = (unsigned short)5062;
int zero = 0;
int var_14 = 508869909;
_Bool var_15 = (_Bool)1;
void init() {
}

void checksum() {
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
