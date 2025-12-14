#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -5943166823266519759LL;
long long int var_1 = 2058453414045686015LL;
_Bool var_12 = (_Bool)1;
int zero = 0;
unsigned int var_15 = 2004325550U;
short var_16 = (short)2970;
signed char var_17 = (signed char)-15;
long long int var_18 = -1578589010708991496LL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
