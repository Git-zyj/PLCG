#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 2022678558U;
_Bool var_8 = (_Bool)1;
unsigned int var_9 = 2022813603U;
int zero = 0;
long long int var_16 = -4989469289952993672LL;
unsigned short var_17 = (unsigned short)34442;
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
