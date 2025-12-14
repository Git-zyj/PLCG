#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
unsigned long long int var_6 = 11954954457987711387ULL;
short var_7 = (short)-9880;
short var_8 = (short)-17441;
unsigned long long int var_9 = 185630121039018919ULL;
unsigned short var_12 = (unsigned short)53895;
int zero = 0;
unsigned short var_16 = (unsigned short)53573;
long long int var_17 = -7605532786157060584LL;
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
