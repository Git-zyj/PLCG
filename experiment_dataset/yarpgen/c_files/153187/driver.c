#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -7011584959125276914LL;
unsigned char var_3 = (unsigned char)115;
signed char var_6 = (signed char)13;
_Bool var_9 = (_Bool)1;
long long int var_10 = -1022028671830274433LL;
signed char var_11 = (signed char)-47;
unsigned int var_15 = 582151460U;
int zero = 0;
_Bool var_16 = (_Bool)0;
unsigned int var_17 = 411943829U;
void init() {
}

void checksum() {
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
