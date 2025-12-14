#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)78;
long long int var_1 = -2844936420042023567LL;
unsigned int var_3 = 4273254540U;
signed char var_4 = (signed char)-79;
unsigned long long int var_5 = 5262341382207047860ULL;
_Bool var_6 = (_Bool)1;
unsigned int var_8 = 2779953001U;
int var_9 = 2080374898;
_Bool var_10 = (_Bool)1;
int zero = 0;
int var_11 = -1912945638;
signed char var_12 = (signed char)-84;
int var_13 = 1412271390;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
