#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_9 = (signed char)26;
unsigned long long int var_10 = 17522605235704243811ULL;
unsigned long long int var_12 = 4705848827732308323ULL;
int zero = 0;
unsigned long long int var_14 = 11379045392811309594ULL;
int var_15 = -1941613749;
void init() {
}

void checksum() {
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
