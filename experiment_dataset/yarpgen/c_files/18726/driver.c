#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)21239;
unsigned int var_8 = 2864895476U;
_Bool var_11 = (_Bool)0;
long long int var_12 = 4123437857370292198LL;
int zero = 0;
long long int var_14 = 6703889253468080797LL;
unsigned short var_15 = (unsigned short)21969;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
