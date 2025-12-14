#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)1;
signed char var_4 = (signed char)-84;
unsigned char var_5 = (unsigned char)27;
unsigned int var_8 = 1165732937U;
unsigned long long int var_11 = 16954293975272010206ULL;
_Bool var_13 = (_Bool)1;
unsigned short var_14 = (unsigned short)26436;
int var_18 = 1204895913;
long long int var_19 = -436883723798497817LL;
int zero = 0;
short var_20 = (short)-21887;
_Bool var_21 = (_Bool)0;
_Bool var_22 = (_Bool)0;
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
