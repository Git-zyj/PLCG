#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)253;
long long int var_8 = -6069452999804075302LL;
short var_9 = (short)8979;
short var_11 = (short)32058;
int zero = 0;
_Bool var_12 = (_Bool)0;
unsigned short var_13 = (unsigned short)37857;
void init() {
}

void checksum() {
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
