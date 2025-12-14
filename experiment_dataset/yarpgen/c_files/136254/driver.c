#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_6 = 16459798653846204778ULL;
unsigned int var_8 = 660684176U;
unsigned int var_11 = 888201030U;
signed char var_12 = (signed char)74;
int zero = 0;
unsigned long long int var_20 = 13161418796958366806ULL;
unsigned char var_21 = (unsigned char)150;
_Bool var_22 = (_Bool)1;
short var_23 = (short)14938;
unsigned short var_24 = (unsigned short)1382;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
