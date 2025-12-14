#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_6 = 2068802143305604951LL;
unsigned int var_8 = 3352202368U;
long long int var_11 = 1784083853297246548LL;
unsigned int var_14 = 3347383259U;
long long int var_17 = -2983573738903558290LL;
int zero = 0;
long long int var_18 = 3229916675607010049LL;
long long int var_19 = -7025958968203367528LL;
long long int var_20 = 3968924948249314580LL;
unsigned int var_21 = 1260648521U;
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
