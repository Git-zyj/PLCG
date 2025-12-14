#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)-31666;
_Bool var_5 = (_Bool)1;
unsigned long long int var_8 = 12581363341114333546ULL;
signed char var_10 = (signed char)-123;
unsigned long long int var_11 = 5424391391821249119ULL;
signed char var_12 = (signed char)-97;
int zero = 0;
_Bool var_13 = (_Bool)1;
unsigned long long int var_14 = 9694583915963364311ULL;
_Bool var_15 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
