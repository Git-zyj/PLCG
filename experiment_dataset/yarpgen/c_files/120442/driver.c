#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 6166718536852675035LL;
_Bool var_1 = (_Bool)0;
int var_2 = -70311890;
unsigned char var_7 = (unsigned char)201;
short var_8 = (short)21239;
int zero = 0;
unsigned long long int var_10 = 3918393181015517860ULL;
unsigned char var_11 = (unsigned char)4;
unsigned char var_12 = (unsigned char)210;
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
