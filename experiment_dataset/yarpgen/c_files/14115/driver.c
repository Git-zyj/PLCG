#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -7659665957523615486LL;
signed char var_1 = (signed char)112;
unsigned int var_2 = 4063682885U;
short var_5 = (short)25590;
signed char var_6 = (signed char)-125;
unsigned int var_8 = 3558955023U;
long long int var_10 = -7728588089084184223LL;
unsigned int var_11 = 1867295309U;
int zero = 0;
_Bool var_13 = (_Bool)1;
unsigned int var_14 = 241818547U;
int var_15 = -15027705;
_Bool var_16 = (_Bool)0;
unsigned int var_17 = 1965132622U;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
