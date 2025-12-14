#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 244433843U;
long long int var_5 = -1040139143412217406LL;
int var_6 = 1095466780;
int zero = 0;
short var_17 = (short)-20495;
_Bool var_18 = (_Bool)1;
long long int var_19 = 762231961859040624LL;
void init() {
}

void checksum() {
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
