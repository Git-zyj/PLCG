#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 2867322380917626358ULL;
long long int var_3 = -3663477892013531360LL;
unsigned int var_9 = 568671324U;
_Bool var_11 = (_Bool)1;
int zero = 0;
long long int var_13 = -8082855737146882323LL;
short var_14 = (short)-820;
short var_15 = (short)6042;
unsigned long long int var_16 = 14431003571220342772ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
