#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-29017;
signed char var_2 = (signed char)71;
unsigned long long int var_3 = 6101059411361438806ULL;
unsigned long long int var_8 = 401648500312335912ULL;
signed char var_13 = (signed char)57;
signed char var_15 = (signed char)112;
int zero = 0;
_Bool var_16 = (_Bool)0;
unsigned long long int var_17 = 10963292281831525247ULL;
short var_18 = (short)27902;
signed char var_19 = (signed char)-75;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
