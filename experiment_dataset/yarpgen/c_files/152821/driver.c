#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)33;
_Bool var_2 = (_Bool)1;
long long int var_3 = 6645877554519156741LL;
unsigned long long int var_8 = 18341138893838293034ULL;
unsigned char var_9 = (unsigned char)94;
int zero = 0;
unsigned char var_13 = (unsigned char)31;
unsigned char var_14 = (unsigned char)4;
int var_15 = 297273607;
unsigned short var_16 = (unsigned short)48999;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
