#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 8790946283265878586ULL;
_Bool var_4 = (_Bool)0;
short var_5 = (short)14846;
_Bool var_9 = (_Bool)1;
int zero = 0;
int var_10 = -760598983;
short var_11 = (short)-14022;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
