#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_6 = (short)-31968;
unsigned long long int var_9 = 5176629173325166351ULL;
signed char var_13 = (signed char)44;
int zero = 0;
long long int var_15 = 2308965213919051279LL;
unsigned long long int var_16 = 15625317528062444186ULL;
_Bool var_17 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
