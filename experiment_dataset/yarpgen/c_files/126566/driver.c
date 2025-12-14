#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -993304781;
short var_10 = (short)-6073;
_Bool var_18 = (_Bool)1;
int zero = 0;
long long int var_19 = -2720590239012660782LL;
unsigned int var_20 = 748594950U;
short var_21 = (short)31961;
void init() {
}

void checksum() {
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
