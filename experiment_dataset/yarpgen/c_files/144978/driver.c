#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)48924;
int var_2 = -194984270;
int var_3 = 343363431;
int var_4 = 1166521673;
int var_13 = -1233067544;
unsigned short var_18 = (unsigned short)50389;
int zero = 0;
unsigned short var_19 = (unsigned short)38260;
int var_20 = -954819988;
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
