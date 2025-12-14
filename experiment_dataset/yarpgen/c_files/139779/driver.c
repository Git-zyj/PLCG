#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)26811;
short var_5 = (short)27518;
_Bool var_6 = (_Bool)1;
unsigned long long int var_10 = 11824013387764804928ULL;
long long int var_11 = 5855904141534688990LL;
int zero = 0;
short var_16 = (short)-32079;
int var_17 = 1926851759;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
