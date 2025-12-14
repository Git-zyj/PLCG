#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)25;
unsigned long long int var_5 = 1820856507600848689ULL;
signed char var_9 = (signed char)80;
long long int var_12 = -235634922716314407LL;
unsigned long long int var_14 = 17538834892259602025ULL;
int zero = 0;
unsigned long long int var_16 = 1054128767531435350ULL;
long long int var_17 = 5781915149091094170LL;
unsigned int var_18 = 2924160165U;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
