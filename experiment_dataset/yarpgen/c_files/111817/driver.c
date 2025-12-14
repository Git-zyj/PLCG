#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 16682455371892165203ULL;
unsigned char var_3 = (unsigned char)80;
_Bool var_6 = (_Bool)0;
unsigned short var_8 = (unsigned short)3469;
int zero = 0;
unsigned long long int var_16 = 15747419515230566186ULL;
int var_17 = 1789352942;
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
