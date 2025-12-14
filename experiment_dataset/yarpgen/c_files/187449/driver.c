#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)22729;
long long int var_1 = 6669210320233053142LL;
long long int var_8 = 602566040969122605LL;
unsigned char var_10 = (unsigned char)5;
int zero = 0;
_Bool var_12 = (_Bool)0;
short var_13 = (short)16818;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
