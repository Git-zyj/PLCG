#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_8 = (_Bool)0;
unsigned long long int var_15 = 8936170758504291912ULL;
_Bool var_16 = (_Bool)0;
unsigned long long int var_18 = 3469597219387255728ULL;
int zero = 0;
long long int var_19 = -8307633487882222097LL;
long long int var_20 = 1869042678716738566LL;
int var_21 = -1098468062;
_Bool var_22 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
