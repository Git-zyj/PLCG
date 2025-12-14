#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)22890;
unsigned int var_3 = 1292065005U;
_Bool var_7 = (_Bool)0;
long long int var_10 = -3903636663614018577LL;
signed char var_12 = (signed char)(-127 - 1);
int zero = 0;
signed char var_13 = (signed char)35;
unsigned int var_14 = 913401928U;
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
