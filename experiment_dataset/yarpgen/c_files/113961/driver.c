#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 846604995U;
signed char var_10 = (signed char)-63;
int zero = 0;
unsigned short var_15 = (unsigned short)39215;
_Bool var_16 = (_Bool)0;
unsigned short var_17 = (unsigned short)47977;
unsigned short var_18 = (unsigned short)20266;
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
