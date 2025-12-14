#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)6388;
int var_7 = 411865778;
unsigned int var_13 = 86506392U;
signed char var_14 = (signed char)58;
int zero = 0;
int var_17 = 1403582796;
_Bool var_18 = (_Bool)0;
int var_19 = 1920294224;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
