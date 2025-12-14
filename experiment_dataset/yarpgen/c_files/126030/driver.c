#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = 8641549522509689932LL;
_Bool var_10 = (_Bool)1;
_Bool var_15 = (_Bool)1;
int zero = 0;
short var_19 = (short)-27273;
unsigned int var_20 = 3793645003U;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
