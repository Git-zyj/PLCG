#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_6 = -99001458;
int var_7 = -1431833287;
_Bool var_10 = (_Bool)1;
int zero = 0;
int var_14 = 2065752756;
unsigned int var_15 = 604123402U;
int var_16 = 423451788;
short var_17 = (short)-21109;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
