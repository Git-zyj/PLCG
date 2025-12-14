#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 3411298528971501358ULL;
unsigned int var_1 = 684836548U;
unsigned long long int var_4 = 10275692416274304593ULL;
_Bool var_8 = (_Bool)0;
signed char var_9 = (signed char)-112;
int zero = 0;
signed char var_10 = (signed char)-61;
unsigned long long int var_11 = 17180512824236715077ULL;
signed char var_12 = (signed char)72;
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
