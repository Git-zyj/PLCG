#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)56256;
_Bool var_2 = (_Bool)1;
long long int var_3 = 91923218449209213LL;
unsigned char var_6 = (unsigned char)53;
long long int var_7 = 5078008979020354041LL;
long long int var_9 = -4677508543883240863LL;
unsigned long long int var_10 = 11316194564490884169ULL;
signed char var_11 = (signed char)35;
signed char var_12 = (signed char)112;
unsigned long long int var_13 = 12616776577387510583ULL;
signed char var_14 = (signed char)14;
unsigned long long int var_15 = 10865610192462302274ULL;
_Bool var_16 = (_Bool)0;
_Bool var_19 = (_Bool)0;
int zero = 0;
unsigned char var_20 = (unsigned char)124;
signed char var_21 = (signed char)-62;
unsigned long long int var_22 = 14401118576631475539ULL;
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
