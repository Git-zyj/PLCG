#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 9164793263619274883LL;
signed char var_6 = (signed char)38;
signed char var_7 = (signed char)11;
short var_11 = (short)-13139;
long long int var_18 = 2256438935309444580LL;
int zero = 0;
unsigned int var_20 = 2627732671U;
unsigned long long int var_21 = 7338214038850403794ULL;
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
