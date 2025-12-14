#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -8149263300998760839LL;
long long int var_3 = -4678774816565027926LL;
_Bool var_6 = (_Bool)0;
int zero = 0;
int var_13 = -1968569159;
long long int var_14 = 2686634618932939967LL;
void init() {
}

void checksum() {
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
