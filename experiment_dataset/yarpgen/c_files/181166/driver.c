#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -879998388;
_Bool var_5 = (_Bool)0;
int var_10 = -1074901487;
int zero = 0;
long long int var_12 = -8519464683940768104LL;
long long int var_13 = -8185418470724054547LL;
unsigned short var_14 = (unsigned short)55338;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
