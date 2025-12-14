#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
long long int var_2 = 76007370580921498LL;
unsigned short var_9 = (unsigned short)11497;
unsigned int var_10 = 367016836U;
unsigned int var_11 = 3507311845U;
short var_12 = (short)27878;
int zero = 0;
signed char var_15 = (signed char)93;
unsigned long long int var_16 = 10511305049471364725ULL;
unsigned long long int var_17 = 16375215681375578495ULL;
unsigned long long int var_18 = 4812829600442393815ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
