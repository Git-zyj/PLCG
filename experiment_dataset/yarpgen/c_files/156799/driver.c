#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
short var_3 = (short)5072;
unsigned long long int var_5 = 9529518511656009656ULL;
unsigned char var_11 = (unsigned char)192;
unsigned char var_14 = (unsigned char)201;
int zero = 0;
_Bool var_19 = (_Bool)1;
long long int var_20 = 4035184467727937670LL;
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
