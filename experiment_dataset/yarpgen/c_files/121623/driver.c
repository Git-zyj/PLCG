#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)127;
signed char var_9 = (signed char)-36;
signed char var_14 = (signed char)103;
signed char var_17 = (signed char)5;
int zero = 0;
signed char var_18 = (signed char)51;
signed char var_19 = (signed char)79;
_Bool var_20 = (_Bool)1;
signed char var_21 = (signed char)-95;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
