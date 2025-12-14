#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)26288;
unsigned char var_5 = (unsigned char)67;
signed char var_6 = (signed char)-94;
long long int var_7 = 3500197356168986012LL;
int var_12 = 32120048;
int zero = 0;
int var_13 = 209432393;
unsigned long long int var_14 = 5357706772421089653ULL;
_Bool var_15 = (_Bool)1;
unsigned char var_16 = (unsigned char)161;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
