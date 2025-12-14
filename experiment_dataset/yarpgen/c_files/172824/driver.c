#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 4758135851693037918LL;
short var_6 = (short)-8522;
unsigned char var_7 = (unsigned char)16;
_Bool var_8 = (_Bool)1;
int zero = 0;
long long int var_10 = 7762228316375685619LL;
signed char var_11 = (signed char)-42;
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
