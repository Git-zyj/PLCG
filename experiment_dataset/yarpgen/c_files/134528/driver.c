#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 810074759U;
int var_2 = -830205152;
long long int var_3 = -6935282348034913156LL;
unsigned int var_4 = 3061332025U;
signed char var_5 = (signed char)-78;
_Bool var_9 = (_Bool)0;
int var_14 = -1495772558;
long long int var_16 = -7137049196073691336LL;
unsigned int var_17 = 2378839175U;
unsigned char var_18 = (unsigned char)136;
int zero = 0;
signed char var_20 = (signed char)62;
int var_21 = -1332677284;
_Bool var_22 = (_Bool)0;
signed char var_23 = (signed char)78;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
