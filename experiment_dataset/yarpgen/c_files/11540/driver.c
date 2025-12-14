#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)20977;
long long int var_1 = 5374532733941595066LL;
unsigned short var_4 = (unsigned short)48319;
short var_6 = (short)-29193;
short var_7 = (short)4506;
short var_10 = (short)17874;
int zero = 0;
_Bool var_12 = (_Bool)1;
long long int var_13 = -7843910097376731726LL;
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
