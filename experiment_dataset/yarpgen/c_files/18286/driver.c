#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1343246033;
int var_5 = -2132969253;
unsigned int var_7 = 3918878784U;
int var_10 = -532014917;
unsigned char var_12 = (unsigned char)112;
int zero = 0;
_Bool var_17 = (_Bool)1;
int var_18 = -983646325;
_Bool var_19 = (_Bool)1;
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
