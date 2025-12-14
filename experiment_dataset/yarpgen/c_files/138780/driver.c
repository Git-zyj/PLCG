#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -85277367;
int var_2 = 830271065;
signed char var_3 = (signed char)-7;
unsigned int var_4 = 1490256881U;
unsigned char var_5 = (unsigned char)100;
_Bool var_6 = (_Bool)0;
unsigned int var_9 = 3507714121U;
int var_12 = -612146713;
long long int var_13 = 9065951798236623758LL;
int zero = 0;
unsigned long long int var_14 = 10181241417082949118ULL;
_Bool var_15 = (_Bool)1;
unsigned long long int var_16 = 5292883674567342100ULL;
unsigned long long int var_17 = 7836262618135297333ULL;
int var_18 = 1559070304;
unsigned int var_19 = 383040777U;
signed char var_20 = (signed char)42;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
