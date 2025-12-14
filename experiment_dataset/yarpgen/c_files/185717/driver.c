#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)23446;
int var_3 = -1940217624;
signed char var_9 = (signed char)-51;
signed char var_10 = (signed char)-85;
int zero = 0;
long long int var_18 = 5540139470994555894LL;
short var_19 = (short)26810;
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
