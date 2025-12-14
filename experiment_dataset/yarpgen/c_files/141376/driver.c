#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-65;
unsigned short var_1 = (unsigned short)25830;
unsigned short var_2 = (unsigned short)26734;
_Bool var_5 = (_Bool)0;
long long int var_9 = -3468129336144750216LL;
int zero = 0;
_Bool var_13 = (_Bool)1;
unsigned long long int var_14 = 9461307163555152134ULL;
unsigned short var_15 = (unsigned short)16446;
unsigned int var_16 = 1722602017U;
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
