#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)233;
_Bool var_3 = (_Bool)1;
unsigned long long int var_13 = 18030426121572128710ULL;
long long int var_14 = -1084707017701172935LL;
_Bool var_17 = (_Bool)0;
int zero = 0;
signed char var_19 = (signed char)44;
long long int var_20 = 2596861363981096824LL;
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
