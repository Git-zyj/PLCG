#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -1548512825;
unsigned long long int var_6 = 15958273162417187552ULL;
unsigned long long int var_9 = 8707134715260957923ULL;
long long int var_10 = -3126833199144631853LL;
unsigned long long int var_11 = 2342776748480464838ULL;
int zero = 0;
long long int var_14 = -2437882154033257969LL;
_Bool var_15 = (_Bool)0;
long long int var_16 = 4828874885426009125LL;
unsigned short var_17 = (unsigned short)4712;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
