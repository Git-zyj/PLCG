#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)24560;
_Bool var_4 = (_Bool)1;
long long int var_8 = -3050123820333018880LL;
int zero = 0;
unsigned long long int var_10 = 17695252895189103679ULL;
unsigned long long int var_11 = 13752910139453844749ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
