#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -34756231905564392LL;
long long int var_1 = -3659122166186223087LL;
unsigned char var_2 = (unsigned char)107;
_Bool var_3 = (_Bool)1;
short var_6 = (short)-16686;
int var_7 = -1534968251;
long long int var_9 = -1513153643949176299LL;
int zero = 0;
signed char var_10 = (signed char)-22;
short var_11 = (short)-24155;
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
