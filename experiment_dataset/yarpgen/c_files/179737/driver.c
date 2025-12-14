#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -8249646332812251135LL;
short var_5 = (short)-25279;
short var_7 = (short)-13081;
long long int var_8 = 6045544632783919292LL;
unsigned int var_12 = 525365103U;
int zero = 0;
long long int var_13 = 7346043516055198794LL;
_Bool var_14 = (_Bool)0;
void init() {
}

void checksum() {
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
