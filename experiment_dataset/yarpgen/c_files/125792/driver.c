#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 5375510938429646508ULL;
signed char var_3 = (signed char)21;
int zero = 0;
_Bool var_11 = (_Bool)0;
unsigned long long int var_12 = 8212615062468491233ULL;
int var_13 = 1442848318;
unsigned long long int var_14 = 11121002760908325163ULL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
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
