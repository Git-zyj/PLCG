#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_7 = (short)27260;
long long int var_8 = -4761912588425878479LL;
unsigned int var_9 = 78617137U;
signed char var_11 = (signed char)-5;
unsigned long long int var_13 = 14433851869773614375ULL;
int zero = 0;
unsigned char var_15 = (unsigned char)174;
_Bool var_16 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
