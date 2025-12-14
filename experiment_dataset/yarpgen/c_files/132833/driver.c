#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
unsigned long long int var_2 = 11948238981330658513ULL;
unsigned short var_4 = (unsigned short)13762;
unsigned short var_5 = (unsigned short)45034;
unsigned int var_6 = 214195802U;
unsigned short var_7 = (unsigned short)49253;
unsigned int var_8 = 495468508U;
int zero = 0;
long long int var_10 = 7939216347132230024LL;
unsigned short var_11 = (unsigned short)18339;
unsigned short var_12 = (unsigned short)46006;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
