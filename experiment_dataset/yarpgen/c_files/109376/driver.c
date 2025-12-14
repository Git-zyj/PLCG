#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)4758;
_Bool var_5 = (_Bool)1;
_Bool var_11 = (_Bool)1;
int var_16 = -1752223549;
int zero = 0;
long long int var_19 = -4662093393823214067LL;
unsigned char var_20 = (unsigned char)225;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
