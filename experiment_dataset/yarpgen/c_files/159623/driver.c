#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)2155;
short var_1 = (short)-2152;
signed char var_2 = (signed char)46;
signed char var_3 = (signed char)40;
unsigned short var_4 = (unsigned short)38829;
short var_5 = (short)-12626;
long long int var_7 = -4070810283486485345LL;
unsigned int var_11 = 302863380U;
unsigned long long int var_12 = 15679019720469646615ULL;
long long int var_13 = 1241167964286988843LL;
unsigned char var_14 = (unsigned char)254;
unsigned int var_15 = 194837526U;
long long int var_17 = -4217463518968161334LL;
unsigned long long int var_18 = 5966745566798504136ULL;
int zero = 0;
short var_20 = (short)-6076;
short var_21 = (short)13565;
long long int var_22 = 3669930538013061927LL;
_Bool var_23 = (_Bool)0;
long long int var_24 = 7064700082546564961LL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
