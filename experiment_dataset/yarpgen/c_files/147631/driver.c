#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_9 = 1291838626;
unsigned int var_11 = 1591757316U;
unsigned int var_15 = 1184366642U;
signed char var_16 = (signed char)79;
int zero = 0;
unsigned short var_17 = (unsigned short)64828;
_Bool var_18 = (_Bool)1;
short var_19 = (short)-32564;
signed char var_20 = (signed char)-20;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
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
