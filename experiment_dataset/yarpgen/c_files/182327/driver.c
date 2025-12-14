#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
int var_3 = 440922409;
int var_4 = -633576021;
long long int var_9 = 8231456075001204195LL;
int zero = 0;
short var_13 = (short)21091;
_Bool var_14 = (_Bool)0;
unsigned long long int var_15 = 10949727165928681761ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
