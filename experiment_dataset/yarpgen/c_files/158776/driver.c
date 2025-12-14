#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_6 = (_Bool)0;
unsigned short var_7 = (unsigned short)50951;
_Bool var_16 = (_Bool)0;
int zero = 0;
unsigned int var_18 = 3356320307U;
unsigned long long int var_19 = 13243056417340244763ULL;
signed char var_20 = (signed char)-73;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
