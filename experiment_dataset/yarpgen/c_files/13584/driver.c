#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)32;
unsigned char var_5 = (unsigned char)253;
_Bool var_8 = (_Bool)0;
int zero = 0;
long long int var_11 = -6208399101908108138LL;
unsigned short var_12 = (unsigned short)676;
unsigned char var_13 = (unsigned char)249;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
