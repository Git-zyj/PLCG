#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-9132;
unsigned long long int var_5 = 1753234465624010803ULL;
int var_11 = -1186669598;
int zero = 0;
unsigned int var_13 = 277100050U;
signed char var_14 = (signed char)-31;
short var_15 = (short)25680;
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
