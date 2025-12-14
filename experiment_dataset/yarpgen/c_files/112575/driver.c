#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 3350406793U;
_Bool var_5 = (_Bool)1;
_Bool var_6 = (_Bool)1;
unsigned int var_11 = 414308438U;
int zero = 0;
unsigned short var_17 = (unsigned short)38901;
long long int var_18 = 2125082569049208959LL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
