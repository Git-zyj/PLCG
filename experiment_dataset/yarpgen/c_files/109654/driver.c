#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_8 = (unsigned short)62351;
_Bool var_14 = (_Bool)0;
long long int var_16 = 7170273179564386303LL;
int zero = 0;
unsigned short var_20 = (unsigned short)13053;
unsigned short var_21 = (unsigned short)30419;
void init() {
}

void checksum() {
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
