#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2715171616U;
int var_5 = -1628928903;
unsigned char var_9 = (unsigned char)41;
_Bool var_10 = (_Bool)1;
int zero = 0;
long long int var_11 = -321820868288266645LL;
unsigned long long int var_12 = 6151779638045316322ULL;
unsigned short var_13 = (unsigned short)46074;
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
