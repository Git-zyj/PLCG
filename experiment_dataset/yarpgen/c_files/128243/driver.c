#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
int var_1 = -808793866;
_Bool var_2 = (_Bool)0;
long long int var_5 = -7558247437197711269LL;
long long int var_10 = 2616176216683757482LL;
short var_11 = (short)15895;
unsigned long long int var_12 = 12053086786127256503ULL;
unsigned char var_14 = (unsigned char)215;
unsigned int var_15 = 4089795107U;
int zero = 0;
unsigned int var_17 = 1412201453U;
_Bool var_18 = (_Bool)0;
signed char var_19 = (signed char)-14;
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
