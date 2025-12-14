#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_8 = (signed char)92;
unsigned char var_10 = (unsigned char)97;
long long int var_14 = -4114131446681599209LL;
int zero = 0;
signed char var_15 = (signed char)127;
_Bool var_16 = (_Bool)0;
signed char var_17 = (signed char)122;
void init() {
}

void checksum() {
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
