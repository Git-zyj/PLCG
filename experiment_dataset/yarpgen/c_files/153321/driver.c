#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 2129783169;
short var_2 = (short)-4695;
unsigned long long int var_5 = 15032261104715218049ULL;
long long int var_9 = -2740625255467921324LL;
int zero = 0;
signed char var_12 = (signed char)-51;
_Bool var_13 = (_Bool)0;
unsigned long long int var_14 = 14747452744629842578ULL;
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
