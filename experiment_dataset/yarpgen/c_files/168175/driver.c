#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 58796828;
int var_8 = -1795887922;
_Bool var_16 = (_Bool)1;
unsigned long long int var_17 = 7216499686318236717ULL;
int zero = 0;
signed char var_19 = (signed char)-20;
unsigned int var_20 = 1653293275U;
_Bool var_21 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
