#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
int var_4 = -1515139068;
unsigned long long int var_7 = 10329030991753388657ULL;
_Bool var_11 = (_Bool)1;
_Bool var_13 = (_Bool)0;
int zero = 0;
int var_20 = -2091160167;
unsigned char var_21 = (unsigned char)205;
void init() {
}

void checksum() {
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
