#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
long long int var_4 = -3054942814716195851LL;
unsigned long long int var_9 = 14311557644375648762ULL;
short var_11 = (short)17894;
short var_17 = (short)-25712;
int zero = 0;
long long int var_20 = -7421285936650587577LL;
long long int var_21 = -7977074840583010344LL;
short var_22 = (short)-2110;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
