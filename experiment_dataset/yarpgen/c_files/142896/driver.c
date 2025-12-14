#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = 1649640423;
unsigned int var_6 = 1730123921U;
int zero = 0;
int var_18 = 1084558139;
unsigned char var_19 = (unsigned char)106;
_Bool var_20 = (_Bool)0;
long long int var_21 = -8765649822186203598LL;
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
