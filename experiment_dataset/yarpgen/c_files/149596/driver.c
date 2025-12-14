#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)0;
signed char var_9 = (signed char)56;
signed char var_15 = (signed char)9;
long long int var_18 = 2320062999300300197LL;
int zero = 0;
unsigned long long int var_19 = 9968512449386420904ULL;
short var_20 = (short)-29705;
short var_21 = (short)-10065;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
