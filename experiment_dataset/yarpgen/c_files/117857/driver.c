#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 66440788U;
signed char var_2 = (signed char)113;
long long int var_4 = 8680262084406833296LL;
unsigned short var_10 = (unsigned short)29064;
int zero = 0;
unsigned long long int var_13 = 11684134686912088212ULL;
unsigned long long int var_14 = 12191485958381506565ULL;
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
