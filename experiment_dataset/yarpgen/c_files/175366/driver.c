#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)36;
int var_3 = -1960071226;
long long int var_4 = -7654684020229221297LL;
signed char var_6 = (signed char)-15;
int zero = 0;
signed char var_15 = (signed char)-100;
long long int var_16 = 1466811350070024235LL;
void init() {
}

void checksum() {
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
