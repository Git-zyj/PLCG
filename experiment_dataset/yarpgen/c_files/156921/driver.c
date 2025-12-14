#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_5 = (short)-29287;
short var_10 = (short)-19166;
long long int var_14 = -515420189251162812LL;
_Bool var_15 = (_Bool)1;
int zero = 0;
short var_19 = (short)4324;
short var_20 = (short)-23181;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
