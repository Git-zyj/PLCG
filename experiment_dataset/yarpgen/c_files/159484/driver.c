#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
unsigned char var_3 = (unsigned char)240;
long long int var_4 = 2072316172806575661LL;
signed char var_5 = (signed char)37;
long long int var_6 = -4295711243723139597LL;
short var_8 = (short)-26558;
unsigned char var_12 = (unsigned char)224;
int zero = 0;
long long int var_13 = 1976849574266875967LL;
unsigned int var_14 = 2504400352U;
long long int var_15 = 5510383700695334038LL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
