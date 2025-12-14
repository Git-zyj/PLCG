#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1712887814U;
unsigned int var_2 = 1900616458U;
_Bool var_3 = (_Bool)1;
signed char var_6 = (signed char)77;
int var_8 = 174663475;
int var_9 = -177097920;
int var_15 = -1460428909;
int var_16 = -246501541;
unsigned char var_17 = (unsigned char)94;
int zero = 0;
long long int var_18 = 1786016491961867035LL;
long long int var_19 = -5582966850791201508LL;
unsigned long long int var_20 = 9587325807731509005ULL;
int var_21 = 790791796;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
