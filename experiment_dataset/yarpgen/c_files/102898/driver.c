#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -8866922874137424751LL;
short var_2 = (short)29445;
_Bool var_3 = (_Bool)1;
short var_5 = (short)21502;
long long int var_9 = -4257056280990650486LL;
int zero = 0;
short var_12 = (short)3543;
long long int var_13 = 3966750578119476908LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
