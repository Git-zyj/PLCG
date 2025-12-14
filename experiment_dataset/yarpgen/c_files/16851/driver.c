#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 2834339368U;
_Bool var_3 = (_Bool)1;
unsigned long long int var_5 = 14043531245989305172ULL;
int var_6 = -1815335047;
unsigned long long int var_13 = 2676602030574311298ULL;
int zero = 0;
unsigned long long int var_14 = 16814729923417881758ULL;
short var_15 = (short)-25191;
signed char var_16 = (signed char)26;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
