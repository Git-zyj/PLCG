#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)-26380;
unsigned short var_8 = (unsigned short)50751;
long long int var_9 = 2525578704245922669LL;
unsigned int var_12 = 3380871390U;
int zero = 0;
short var_13 = (short)-23446;
long long int var_14 = -609188797748156843LL;
long long int var_15 = -2020533922998503895LL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
