#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-14598;
int var_2 = -366789007;
unsigned char var_9 = (unsigned char)48;
_Bool var_12 = (_Bool)0;
int zero = 0;
long long int var_17 = -6737673452764201705LL;
long long int var_18 = -1560840693819966904LL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
