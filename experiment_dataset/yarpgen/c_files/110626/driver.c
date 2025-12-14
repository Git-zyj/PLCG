#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_7 = (signed char)76;
int var_11 = -1676954735;
signed char var_12 = (signed char)4;
int zero = 0;
unsigned short var_15 = (unsigned short)47554;
_Bool var_16 = (_Bool)1;
unsigned int var_17 = 3276313145U;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
