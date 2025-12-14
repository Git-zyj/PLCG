#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)12099;
short var_2 = (short)-3566;
short var_6 = (short)21359;
unsigned int var_11 = 2791963461U;
int zero = 0;
long long int var_12 = 8758517578510445712LL;
short var_13 = (short)28428;
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
