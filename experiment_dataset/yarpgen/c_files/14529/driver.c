#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)253;
unsigned short var_7 = (unsigned short)14175;
unsigned char var_10 = (unsigned char)80;
unsigned short var_12 = (unsigned short)25622;
int zero = 0;
_Bool var_19 = (_Bool)1;
short var_20 = (short)-12234;
void init() {
}

void checksum() {
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
