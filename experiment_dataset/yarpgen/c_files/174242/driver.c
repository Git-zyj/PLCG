#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)0;
long long int var_9 = 7155420002427206666LL;
unsigned int var_13 = 2946731264U;
unsigned int var_16 = 1593379746U;
int zero = 0;
unsigned int var_18 = 149115428U;
long long int var_19 = -7032048849651299386LL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
