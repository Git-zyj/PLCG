#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_15 = (_Bool)1;
unsigned char var_18 = (unsigned char)171;
unsigned char var_19 = (unsigned char)26;
int zero = 0;
unsigned short var_20 = (unsigned short)18604;
_Bool var_21 = (_Bool)1;
signed char var_22 = (signed char)85;
long long int var_23 = -2441988840052450955LL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
