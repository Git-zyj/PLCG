#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)77;
signed char var_1 = (signed char)119;
short var_3 = (short)-31030;
unsigned long long int var_6 = 7560146992112227526ULL;
unsigned short var_15 = (unsigned short)51388;
int zero = 0;
long long int var_17 = 8525059468157474240LL;
unsigned short var_18 = (unsigned short)52928;
short var_19 = (short)21226;
unsigned short var_20 = (unsigned short)61801;
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
