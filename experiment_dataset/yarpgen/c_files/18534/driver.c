#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 8574317392102883966LL;
unsigned int var_14 = 3008024520U;
int zero = 0;
unsigned long long int var_18 = 14058394342475126309ULL;
unsigned int var_19 = 3971159100U;
long long int var_20 = -185720411644305423LL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
