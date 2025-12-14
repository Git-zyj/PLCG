#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
int var_4 = 1969770895;
unsigned long long int var_9 = 11319321407278805015ULL;
unsigned int var_11 = 648150490U;
int var_12 = -323293983;
unsigned char var_14 = (unsigned char)77;
int zero = 0;
unsigned int var_20 = 2033301088U;
long long int var_21 = 212905266515544033LL;
long long int var_22 = 5955156459369469154LL;
unsigned int var_23 = 1601035777U;
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
