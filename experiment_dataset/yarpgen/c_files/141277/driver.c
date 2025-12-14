#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_6 = (_Bool)0;
signed char var_11 = (signed char)-124;
unsigned long long int var_12 = 14782250948091845641ULL;
int var_17 = 2071222263;
int zero = 0;
unsigned long long int var_20 = 688539381092366212ULL;
signed char var_21 = (signed char)-75;
long long int var_22 = 4523432128279916484LL;
void init() {
}

void checksum() {
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
