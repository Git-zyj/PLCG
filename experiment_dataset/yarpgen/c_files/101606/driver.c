#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_4 = (_Bool)1;
unsigned short var_5 = (unsigned short)44539;
signed char var_8 = (signed char)-51;
unsigned int var_11 = 3140796922U;
unsigned short var_13 = (unsigned short)47055;
short var_14 = (short)21956;
int zero = 0;
unsigned long long int var_15 = 1522697605211497960ULL;
unsigned int var_16 = 1419613172U;
unsigned int var_17 = 3802417121U;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
