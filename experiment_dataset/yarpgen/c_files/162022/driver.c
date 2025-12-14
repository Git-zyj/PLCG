#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)0;
long long int var_8 = -9067019787882053386LL;
unsigned long long int var_9 = 3417053384998640150ULL;
unsigned short var_11 = (unsigned short)24005;
int zero = 0;
signed char var_16 = (signed char)94;
unsigned int var_17 = 3361275706U;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
