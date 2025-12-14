#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 612796986U;
signed char var_5 = (signed char)-93;
signed char var_6 = (signed char)-84;
_Bool var_9 = (_Bool)1;
int zero = 0;
int var_13 = -456673738;
signed char var_14 = (signed char)-96;
unsigned long long int var_15 = 7782858679947269776ULL;
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
