#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1596277872;
unsigned int var_1 = 2024223552U;
int var_3 = 1669685776;
int var_5 = 1857248980;
int var_6 = -790129060;
signed char var_9 = (signed char)-88;
int zero = 0;
short var_10 = (short)-4544;
_Bool var_11 = (_Bool)0;
unsigned long long int var_12 = 5591953291286676073ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
