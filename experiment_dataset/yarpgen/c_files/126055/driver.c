#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -899143277463803648LL;
signed char var_9 = (signed char)-41;
int zero = 0;
_Bool var_14 = (_Bool)0;
short var_15 = (short)29071;
signed char var_16 = (signed char)121;
short var_17 = (short)-3672;
short var_18 = (short)-4023;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
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
