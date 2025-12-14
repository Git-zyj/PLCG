#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = 476741007;
unsigned int var_5 = 2392968315U;
_Bool var_10 = (_Bool)1;
short var_11 = (short)-22215;
int zero = 0;
int var_12 = -1152339828;
unsigned char var_13 = (unsigned char)64;
long long int var_14 = 5658540489502694336LL;
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
