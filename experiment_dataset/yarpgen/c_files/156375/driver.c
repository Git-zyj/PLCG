#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)58346;
unsigned short var_4 = (unsigned short)31573;
unsigned short var_7 = (unsigned short)51277;
int zero = 0;
long long int var_10 = -8112895385551733466LL;
long long int var_11 = -1344528670441470207LL;
signed char var_12 = (signed char)-25;
unsigned short var_13 = (unsigned short)8607;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
