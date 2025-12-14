#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-5389;
long long int var_1 = -1309097757782280359LL;
int var_3 = -163281026;
short var_5 = (short)2535;
int zero = 0;
int var_10 = 301584081;
short var_11 = (short)28440;
unsigned long long int var_12 = 18053725112623777079ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
