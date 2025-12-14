#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -5896503504016132944LL;
unsigned short var_6 = (unsigned short)37785;
_Bool var_7 = (_Bool)0;
int zero = 0;
int var_12 = 703405678;
short var_13 = (short)5218;
long long int var_14 = -1962569215051395922LL;
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
