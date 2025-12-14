#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)44346;
short var_5 = (short)-1899;
unsigned short var_6 = (unsigned short)16844;
signed char var_11 = (signed char)26;
long long int var_14 = -8335258660097641321LL;
int zero = 0;
short var_15 = (short)-10326;
long long int var_16 = 7488831794025090109LL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
