#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)125;
signed char var_1 = (signed char)43;
unsigned long long int var_2 = 266278316510163401ULL;
_Bool var_6 = (_Bool)1;
long long int var_11 = -7179254644086884419LL;
int zero = 0;
long long int var_12 = 2440561338654579767LL;
unsigned short var_13 = (unsigned short)21178;
unsigned short var_14 = (unsigned short)3495;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
