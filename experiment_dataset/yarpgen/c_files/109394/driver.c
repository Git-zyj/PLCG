#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 4938449061105578824LL;
signed char var_5 = (signed char)20;
short var_16 = (short)17384;
int var_17 = -1148389921;
int zero = 0;
short var_19 = (short)5937;
signed char var_20 = (signed char)23;
signed char var_21 = (signed char)8;
unsigned int var_22 = 2262713477U;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
