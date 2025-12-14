#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_5 = (signed char)11;
unsigned long long int var_7 = 15039495391896062978ULL;
unsigned long long int var_9 = 2475483799909562288ULL;
int var_14 = -34377248;
unsigned char var_16 = (unsigned char)69;
_Bool var_17 = (_Bool)1;
int zero = 0;
_Bool var_19 = (_Bool)1;
unsigned long long int var_20 = 10992226999968361298ULL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
