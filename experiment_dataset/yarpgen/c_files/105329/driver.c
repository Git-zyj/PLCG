#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_8 = 221708187;
_Bool var_9 = (_Bool)0;
_Bool var_10 = (_Bool)0;
short var_17 = (short)21368;
int zero = 0;
short var_18 = (short)-29104;
int var_19 = 1485850639;
int var_20 = -112899624;
int var_21 = -700689178;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
