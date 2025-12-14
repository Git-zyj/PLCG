#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -3165383969557285578LL;
long long int var_2 = 5602710992532622936LL;
short var_4 = (short)-24989;
short var_5 = (short)-8540;
long long int var_7 = 2015719791103235318LL;
long long int var_10 = 948688643704864793LL;
short var_11 = (short)-2333;
long long int var_13 = 6416454894407001759LL;
long long int var_16 = 1331618363522952657LL;
long long int var_18 = 2285832848898467026LL;
int zero = 0;
_Bool var_19 = (_Bool)0;
int var_20 = 694431499;
long long int var_21 = 97271456341712893LL;
short var_22 = (short)14567;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
