#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-59;
_Bool var_7 = (_Bool)0;
unsigned long long int var_8 = 16290808612908537364ULL;
unsigned char var_10 = (unsigned char)6;
int zero = 0;
unsigned int var_14 = 3798268123U;
unsigned int var_15 = 2981161337U;
long long int var_16 = 6734661182342218550LL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
