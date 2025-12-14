#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 834365553475017365LL;
long long int var_10 = 4668370748344583758LL;
int zero = 0;
signed char var_20 = (signed char)-81;
unsigned int var_21 = 34975121U;
unsigned int var_22 = 4111461375U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
