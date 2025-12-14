#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1446966735;
_Bool var_2 = (_Bool)0;
int var_4 = 1651959773;
unsigned char var_7 = (unsigned char)234;
unsigned long long int var_8 = 9948397716564179015ULL;
int zero = 0;
int var_10 = -1089436809;
unsigned long long int var_11 = 7566459396105939177ULL;
int var_12 = 1685352751;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
