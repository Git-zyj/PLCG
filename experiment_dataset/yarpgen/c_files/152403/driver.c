#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)41545;
unsigned int var_6 = 1108140765U;
long long int var_9 = 5463052400380070897LL;
int zero = 0;
unsigned short var_16 = (unsigned short)22927;
_Bool var_17 = (_Bool)0;
unsigned int var_18 = 3034674107U;
unsigned int var_19 = 1947575407U;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
