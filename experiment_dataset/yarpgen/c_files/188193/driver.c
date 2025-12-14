#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)30465;
_Bool var_11 = (_Bool)0;
signed char var_12 = (signed char)-66;
unsigned int var_14 = 2594784893U;
unsigned long long int var_15 = 7845557544249641379ULL;
unsigned int var_18 = 3014664756U;
int zero = 0;
short var_20 = (short)-6693;
unsigned long long int var_21 = 5199065774114071811ULL;
int var_22 = -667436991;
unsigned long long int var_23 = 18296759408038495558ULL;
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
