#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)124;
_Bool var_2 = (_Bool)0;
unsigned long long int var_5 = 11947609426916809006ULL;
int zero = 0;
long long int var_18 = -4759258232978494404LL;
signed char var_19 = (signed char)16;
unsigned int var_20 = 1192404068U;
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
