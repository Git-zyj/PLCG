#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)40;
unsigned long long int var_1 = 17202261830794133174ULL;
unsigned int var_8 = 3081050450U;
long long int var_9 = -2599167709624374232LL;
_Bool var_12 = (_Bool)0;
int zero = 0;
short var_15 = (short)-25327;
_Bool var_16 = (_Bool)1;
signed char var_17 = (signed char)64;
int var_18 = 354819943;
int var_19 = -1773037327;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
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
