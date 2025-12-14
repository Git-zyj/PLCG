#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_6 = -1728036548085874549LL;
long long int var_10 = 5239396198207362126LL;
unsigned char var_12 = (unsigned char)233;
int zero = 0;
_Bool var_14 = (_Bool)1;
signed char var_15 = (signed char)-111;
unsigned long long int var_16 = 6820182593322739139ULL;
short var_17 = (short)-28628;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
