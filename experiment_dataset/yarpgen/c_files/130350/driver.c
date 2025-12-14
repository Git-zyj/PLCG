#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)-13539;
unsigned long long int var_17 = 5518674295622307815ULL;
unsigned short var_18 = (unsigned short)57731;
int zero = 0;
_Bool var_19 = (_Bool)1;
unsigned int var_20 = 1986389564U;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
