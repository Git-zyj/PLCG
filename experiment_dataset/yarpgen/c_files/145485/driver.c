#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 8657831917215727244LL;
_Bool var_16 = (_Bool)0;
long long int var_18 = -7690141278902403321LL;
int zero = 0;
unsigned short var_19 = (unsigned short)61243;
short var_20 = (short)3341;
unsigned int var_21 = 1058990471U;
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
