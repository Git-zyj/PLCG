#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)29974;
unsigned short var_12 = (unsigned short)40886;
unsigned int var_14 = 3580182076U;
int zero = 0;
signed char var_17 = (signed char)63;
_Bool var_18 = (_Bool)1;
int var_19 = -1678609732;
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
