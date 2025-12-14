#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 13992610936828336378ULL;
_Bool var_1 = (_Bool)1;
long long int var_2 = -1591750722638651731LL;
unsigned long long int var_4 = 5409321090813509790ULL;
_Bool var_7 = (_Bool)0;
_Bool var_8 = (_Bool)0;
unsigned int var_11 = 2643208414U;
_Bool var_12 = (_Bool)0;
unsigned int var_13 = 3932580876U;
int zero = 0;
long long int var_15 = 7187866449492108415LL;
long long int var_16 = 7387651346734987061LL;
unsigned long long int var_17 = 5521866398900136510ULL;
unsigned int var_18 = 2005946326U;
unsigned long long int var_19 = 6246566053559371057ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
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
