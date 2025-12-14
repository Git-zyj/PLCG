#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)0;
short var_5 = (short)26613;
_Bool var_6 = (_Bool)1;
long long int var_7 = 3426903728802700265LL;
unsigned long long int var_17 = 11098350595279148466ULL;
int zero = 0;
unsigned char var_19 = (unsigned char)203;
unsigned int var_20 = 2324262539U;
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
