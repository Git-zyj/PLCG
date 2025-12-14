#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
short var_1 = (short)11526;
signed char var_2 = (signed char)28;
int var_3 = 2026410766;
short var_5 = (short)19039;
unsigned short var_10 = (unsigned short)32541;
int zero = 0;
unsigned int var_12 = 3751952300U;
long long int var_13 = -4396794656242859692LL;
_Bool var_14 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
