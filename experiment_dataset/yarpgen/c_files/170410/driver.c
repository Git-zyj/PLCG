#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 13086804184959759818ULL;
unsigned short var_2 = (unsigned short)45041;
unsigned long long int var_7 = 5030469999972588385ULL;
short var_8 = (short)-5688;
int zero = 0;
_Bool var_16 = (_Bool)1;
signed char var_17 = (signed char)23;
unsigned short var_18 = (unsigned short)20489;
void init() {
}

void checksum() {
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
