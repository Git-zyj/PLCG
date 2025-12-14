#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3653927533U;
_Bool var_3 = (_Bool)1;
_Bool var_5 = (_Bool)0;
unsigned long long int var_6 = 9306201833686879315ULL;
long long int var_8 = 6525180941287985786LL;
int zero = 0;
unsigned int var_10 = 1798392267U;
signed char var_11 = (signed char)-103;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
