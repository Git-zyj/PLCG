#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 434138221U;
short var_7 = (short)-1811;
long long int var_9 = -1925224359199725251LL;
long long int var_12 = 3018887590857498994LL;
long long int var_14 = 2527906193856170082LL;
int zero = 0;
long long int var_15 = 1302555633534473922LL;
_Bool var_16 = (_Bool)1;
unsigned short var_17 = (unsigned short)43149;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
