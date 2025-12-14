#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)21220;
short var_3 = (short)19836;
unsigned int var_6 = 3655603555U;
short var_7 = (short)-505;
int zero = 0;
_Bool var_10 = (_Bool)0;
short var_11 = (short)5580;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
