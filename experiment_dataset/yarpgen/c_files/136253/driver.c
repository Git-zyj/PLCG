#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_7 = 5889012701287542765LL;
_Bool var_8 = (_Bool)1;
int var_13 = 765702346;
int var_15 = -2106427928;
unsigned long long int var_16 = 16979225545990616434ULL;
int zero = 0;
unsigned short var_20 = (unsigned short)7556;
short var_21 = (short)12788;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
