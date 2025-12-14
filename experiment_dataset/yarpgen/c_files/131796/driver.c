#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-22509;
signed char var_1 = (signed char)-7;
unsigned long long int var_9 = 17903950676358399155ULL;
_Bool var_10 = (_Bool)0;
short var_15 = (short)25791;
int zero = 0;
short var_18 = (short)15824;
int var_19 = 796156735;
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
