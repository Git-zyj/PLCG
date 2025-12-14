#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)1;
short var_4 = (short)2828;
unsigned long long int var_7 = 12157508299713811801ULL;
short var_11 = (short)19181;
unsigned long long int var_12 = 4959829293091868036ULL;
unsigned short var_14 = (unsigned short)2884;
int zero = 0;
int var_15 = -1021427143;
signed char var_16 = (signed char)17;
unsigned short var_17 = (unsigned short)5426;
short var_18 = (short)18082;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
