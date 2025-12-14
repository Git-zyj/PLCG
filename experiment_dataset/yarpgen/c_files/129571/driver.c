#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_6 = -1530397898894141733LL;
unsigned short var_8 = (unsigned short)45682;
_Bool var_11 = (_Bool)0;
int zero = 0;
unsigned short var_14 = (unsigned short)8295;
unsigned long long int var_15 = 9761974446446436066ULL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
