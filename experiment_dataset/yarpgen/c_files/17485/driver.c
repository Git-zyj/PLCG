#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2867639907U;
_Bool var_4 = (_Bool)0;
long long int var_16 = 6053302294801391076LL;
int zero = 0;
long long int var_17 = 510600695478204921LL;
unsigned short var_18 = (unsigned short)63902;
void init() {
}

void checksum() {
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
