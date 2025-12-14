#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)132;
signed char var_1 = (signed char)39;
unsigned long long int var_4 = 4714736145348706986ULL;
short var_8 = (short)-6145;
short var_9 = (short)2553;
unsigned long long int var_11 = 14328057522214765798ULL;
short var_15 = (short)15362;
int zero = 0;
_Bool var_16 = (_Bool)0;
signed char var_17 = (signed char)-18;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
