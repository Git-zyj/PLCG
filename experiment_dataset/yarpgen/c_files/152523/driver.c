#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)-85;
long long int var_4 = 4185812849180022437LL;
unsigned short var_5 = (unsigned short)44018;
_Bool var_6 = (_Bool)0;
unsigned short var_7 = (unsigned short)48642;
unsigned int var_10 = 2887979436U;
int zero = 0;
unsigned short var_11 = (unsigned short)34599;
unsigned int var_12 = 563800351U;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
