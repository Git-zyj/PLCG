#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 241305059864136292LL;
long long int var_6 = -6155056541879190217LL;
long long int var_7 = -4055863436808671481LL;
long long int var_11 = 4061005205954159808LL;
long long int var_12 = 1191837672531715910LL;
_Bool var_15 = (_Bool)0;
_Bool var_17 = (_Bool)1;
int zero = 0;
unsigned int var_18 = 1284810830U;
signed char var_19 = (signed char)34;
void init() {
}

void checksum() {
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
