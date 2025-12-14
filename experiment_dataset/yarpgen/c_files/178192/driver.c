#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-19;
short var_5 = (short)-14206;
unsigned long long int var_9 = 10682239183061028031ULL;
signed char var_10 = (signed char)-123;
long long int var_11 = -4351252152964712218LL;
unsigned short var_12 = (unsigned short)58866;
int zero = 0;
_Bool var_13 = (_Bool)0;
int var_14 = -700382792;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
