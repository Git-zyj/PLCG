#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 7120570932324807748LL;
unsigned short var_6 = (unsigned short)7375;
int var_10 = 893954263;
signed char var_11 = (signed char)47;
int zero = 0;
unsigned short var_13 = (unsigned short)8191;
_Bool var_14 = (_Bool)0;
unsigned short var_15 = (unsigned short)19628;
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
