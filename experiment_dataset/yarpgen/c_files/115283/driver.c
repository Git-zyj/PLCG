#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)80;
signed char var_4 = (signed char)78;
unsigned char var_7 = (unsigned char)229;
_Bool var_13 = (_Bool)1;
unsigned char var_16 = (unsigned char)239;
int zero = 0;
unsigned char var_19 = (unsigned char)48;
unsigned long long int var_20 = 15725315661782269335ULL;
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
