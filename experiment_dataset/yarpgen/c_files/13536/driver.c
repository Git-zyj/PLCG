#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 2379834914918055120ULL;
unsigned long long int var_5 = 11325823824604906002ULL;
unsigned long long int var_9 = 162830542492777410ULL;
int zero = 0;
_Bool var_12 = (_Bool)0;
unsigned long long int var_13 = 14967993791959500093ULL;
int var_14 = 2059864203;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
