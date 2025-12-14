#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)0;
signed char var_7 = (signed char)18;
int var_9 = -212178305;
int zero = 0;
unsigned long long int var_12 = 16991928732896653289ULL;
unsigned long long int var_13 = 655165518011962524ULL;
signed char var_14 = (signed char)100;
void init() {
}

void checksum() {
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
