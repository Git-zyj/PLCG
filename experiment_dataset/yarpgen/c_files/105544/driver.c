#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)119;
_Bool var_2 = (_Bool)0;
long long int var_7 = -2070672434702016816LL;
signed char var_10 = (signed char)60;
int zero = 0;
unsigned char var_13 = (unsigned char)31;
unsigned char var_14 = (unsigned char)241;
void init() {
}

void checksum() {
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
