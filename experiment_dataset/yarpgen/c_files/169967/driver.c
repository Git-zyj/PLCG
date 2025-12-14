#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3940798453U;
unsigned long long int var_8 = 16511628353468206413ULL;
_Bool var_9 = (_Bool)0;
signed char var_14 = (signed char)46;
long long int var_15 = 84587827663270113LL;
int zero = 0;
unsigned int var_18 = 170533335U;
unsigned short var_19 = (unsigned short)62548;
unsigned int var_20 = 3032837451U;
long long int var_21 = -4118081667221060443LL;
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
