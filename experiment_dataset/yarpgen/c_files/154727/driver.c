#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 2451374679762454032LL;
int var_5 = 525513083;
signed char var_6 = (signed char)-72;
int var_11 = 1957706590;
int var_15 = 1127086378;
int zero = 0;
signed char var_19 = (signed char)-6;
long long int var_20 = 6424073455892382611LL;
void init() {
}

void checksum() {
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
