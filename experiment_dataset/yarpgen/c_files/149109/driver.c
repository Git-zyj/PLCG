#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 768987469;
unsigned int var_8 = 3569765006U;
int var_11 = -1717141822;
_Bool var_16 = (_Bool)1;
int zero = 0;
_Bool var_20 = (_Bool)0;
short var_21 = (short)11647;
long long int var_22 = 9065534281266757107LL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
