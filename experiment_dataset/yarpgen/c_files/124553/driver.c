#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_4 = (_Bool)1;
unsigned long long int var_7 = 8897513912316287097ULL;
signed char var_12 = (signed char)62;
unsigned char var_14 = (unsigned char)43;
int var_17 = -1037331555;
int zero = 0;
_Bool var_19 = (_Bool)1;
long long int var_20 = -1221960859708443045LL;
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
