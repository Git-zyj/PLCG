#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
long long int var_3 = 8012413946164839634LL;
long long int var_5 = -1209261862642416535LL;
int var_14 = -828522356;
long long int var_17 = 3143393526982968040LL;
int zero = 0;
unsigned short var_18 = (unsigned short)22959;
long long int var_19 = 5230739836781530857LL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
