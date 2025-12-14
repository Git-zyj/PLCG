#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1501166410;
_Bool var_1 = (_Bool)1;
unsigned long long int var_3 = 15634207162483122076ULL;
unsigned char var_4 = (unsigned char)91;
_Bool var_5 = (_Bool)1;
unsigned char var_7 = (unsigned char)92;
unsigned char var_8 = (unsigned char)62;
long long int var_10 = 577090033981498111LL;
int zero = 0;
_Bool var_11 = (_Bool)1;
unsigned long long int var_12 = 5144099947796977911ULL;
long long int var_13 = 6517433320457733849LL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
