#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 474542341;
short var_1 = (short)-14525;
unsigned long long int var_2 = 4234647848861224720ULL;
unsigned char var_4 = (unsigned char)231;
int var_9 = 1487822704;
int zero = 0;
_Bool var_12 = (_Bool)0;
int var_13 = 1429397135;
void init() {
}

void checksum() {
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
