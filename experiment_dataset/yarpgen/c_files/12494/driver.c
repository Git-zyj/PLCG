#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)1;
unsigned int var_4 = 1226787931U;
long long int var_5 = 3873650461928963432LL;
signed char var_6 = (signed char)-52;
unsigned long long int var_7 = 8583718984459329487ULL;
short var_9 = (short)-16916;
unsigned int var_11 = 2954276179U;
signed char var_12 = (signed char)47;
unsigned long long int var_14 = 7787483268659682624ULL;
unsigned int var_16 = 3342173927U;
int var_17 = -1872771796;
int zero = 0;
signed char var_18 = (signed char)72;
short var_19 = (short)27173;
unsigned long long int var_20 = 12152357136623067685ULL;
int var_21 = -1914260790;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
