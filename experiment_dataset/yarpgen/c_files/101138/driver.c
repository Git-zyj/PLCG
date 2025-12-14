#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)85;
unsigned short var_7 = (unsigned short)24700;
long long int var_9 = 8218881052174894457LL;
unsigned short var_10 = (unsigned short)21100;
signed char var_11 = (signed char)77;
unsigned short var_14 = (unsigned short)63554;
int zero = 0;
_Bool var_16 = (_Bool)0;
unsigned short var_17 = (unsigned short)35063;
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
