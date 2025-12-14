#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -8829373001636326978LL;
unsigned short var_4 = (unsigned short)36595;
unsigned char var_14 = (unsigned char)14;
int zero = 0;
unsigned int var_15 = 3478362471U;
_Bool var_16 = (_Bool)1;
unsigned short var_17 = (unsigned short)42392;
_Bool var_18 = (_Bool)0;
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
