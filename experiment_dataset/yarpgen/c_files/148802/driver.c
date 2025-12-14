#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 13333560615536342602ULL;
unsigned long long int var_11 = 10964704743772229857ULL;
long long int var_17 = 8184431631604152317LL;
int zero = 0;
short var_18 = (short)-9670;
short var_19 = (short)-26120;
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
