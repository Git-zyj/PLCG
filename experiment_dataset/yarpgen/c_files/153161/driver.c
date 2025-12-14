#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -828903189929285500LL;
unsigned long long int var_4 = 9989149542333623728ULL;
signed char var_5 = (signed char)26;
long long int var_11 = -3034137558544678489LL;
_Bool var_12 = (_Bool)0;
int zero = 0;
short var_15 = (short)-26105;
unsigned short var_16 = (unsigned short)63183;
long long int var_17 = 8496547201418910610LL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
