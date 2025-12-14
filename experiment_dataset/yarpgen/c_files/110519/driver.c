#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_5 = (_Bool)1;
int var_10 = -754773908;
int var_11 = -406457040;
unsigned long long int var_12 = 13077444481255182179ULL;
signed char var_15 = (signed char)40;
int zero = 0;
int var_18 = -1492137329;
signed char var_19 = (signed char)32;
unsigned char var_20 = (unsigned char)49;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
