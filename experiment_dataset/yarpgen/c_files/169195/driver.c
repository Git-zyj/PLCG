#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)20256;
short var_6 = (short)23483;
unsigned int var_8 = 2556338839U;
unsigned long long int var_11 = 3928850356328475434ULL;
int zero = 0;
short var_12 = (short)-31203;
long long int var_13 = 6599557325882741440LL;
int var_14 = -2085007130;
short var_15 = (short)29485;
signed char var_16 = (signed char)-11;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
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
