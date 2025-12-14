#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_4 = (_Bool)1;
long long int var_9 = -7716105050955505543LL;
int zero = 0;
int var_15 = 335577635;
signed char var_16 = (signed char)-84;
unsigned long long int var_17 = 6532789143962336999ULL;
unsigned int var_18 = 2713129766U;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
