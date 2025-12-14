#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_11 = -4032667109115235050LL;
int zero = 0;
signed char var_20 = (signed char)-38;
long long int var_21 = -486664536870979343LL;
unsigned short var_22 = (unsigned short)63401;
long long int var_23 = -6612144328631643332LL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
