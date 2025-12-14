#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -2257248273750768176LL;
unsigned int var_2 = 4228610342U;
_Bool var_8 = (_Bool)1;
_Bool var_10 = (_Bool)0;
signed char var_12 = (signed char)65;
int zero = 0;
_Bool var_13 = (_Bool)0;
long long int var_14 = 5412346831950768142LL;
long long int var_15 = 4063703234969191981LL;
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
