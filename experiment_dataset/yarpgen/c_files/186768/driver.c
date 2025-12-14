#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
_Bool var_4 = (_Bool)1;
_Bool var_7 = (_Bool)1;
int zero = 0;
unsigned long long int var_10 = 6490025132783993482ULL;
unsigned short var_11 = (unsigned short)32313;
unsigned long long int var_12 = 8318744111270706408ULL;
long long int var_13 = -8557190748033819700LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
