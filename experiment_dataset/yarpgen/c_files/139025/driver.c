#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)186;
long long int var_5 = 8711240127064531051LL;
short var_10 = (short)-6593;
unsigned char var_12 = (unsigned char)163;
long long int var_13 = -993815705389878113LL;
unsigned long long int var_14 = 15822324449953149582ULL;
unsigned int var_17 = 1301277882U;
short var_18 = (short)5303;
unsigned long long int var_19 = 1757380017002781438ULL;
int zero = 0;
long long int var_20 = -8349886691910377320LL;
_Bool var_21 = (_Bool)1;
unsigned int var_22 = 3971393880U;
unsigned char var_23 = (unsigned char)104;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
