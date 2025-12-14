#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)33309;
unsigned short var_5 = (unsigned short)25748;
int var_8 = 1492424622;
unsigned int var_12 = 2453787847U;
int zero = 0;
unsigned int var_13 = 2318992642U;
signed char var_14 = (signed char)70;
void init() {
}

void checksum() {
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
