#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_5 = (signed char)-8;
unsigned short var_11 = (unsigned short)17532;
unsigned int var_12 = 3447978216U;
int zero = 0;
_Bool var_16 = (_Bool)1;
unsigned long long int var_17 = 7158514417215930170ULL;
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
