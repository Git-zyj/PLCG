#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_5 = (_Bool)0;
_Bool var_6 = (_Bool)0;
long long int var_7 = 3655364782909926958LL;
unsigned char var_8 = (unsigned char)197;
unsigned int var_17 = 2714086068U;
int zero = 0;
long long int var_18 = -1576150530594730506LL;
unsigned int var_19 = 2413306556U;
unsigned int var_20 = 2961610250U;
int var_21 = -1642897594;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
