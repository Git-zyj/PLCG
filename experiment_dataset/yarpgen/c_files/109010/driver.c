#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 4095409440663294718LL;
_Bool var_4 = (_Bool)1;
signed char var_9 = (signed char)-87;
unsigned long long int var_12 = 2058186207537094348ULL;
short var_15 = (short)16341;
int zero = 0;
unsigned long long int var_16 = 801025765608023725ULL;
signed char var_17 = (signed char)-25;
int var_18 = -480644837;
void init() {
}

void checksum() {
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
