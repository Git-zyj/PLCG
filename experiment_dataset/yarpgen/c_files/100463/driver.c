#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_5 = (_Bool)1;
int var_11 = 835587144;
unsigned long long int var_14 = 8306637428340890102ULL;
short var_15 = (short)-22482;
int zero = 0;
long long int var_17 = 1058403073697651346LL;
long long int var_18 = 8669384900263742911LL;
unsigned int var_19 = 1240148644U;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
