#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 3397426061679110105ULL;
_Bool var_4 = (_Bool)1;
short var_6 = (short)-20095;
int var_9 = 472343171;
unsigned char var_12 = (unsigned char)168;
int zero = 0;
unsigned long long int var_20 = 1071543187683248330ULL;
long long int var_21 = 920763611257119572LL;
unsigned int var_22 = 2652445808U;
unsigned short var_23 = (unsigned short)3521;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
