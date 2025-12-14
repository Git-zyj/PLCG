#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)59792;
_Bool var_1 = (_Bool)1;
unsigned short var_2 = (unsigned short)60664;
unsigned short var_3 = (unsigned short)12097;
int var_5 = -243420017;
int var_6 = -1461350731;
unsigned short var_10 = (unsigned short)50873;
signed char var_13 = (signed char)-70;
short var_14 = (short)-10342;
int zero = 0;
unsigned long long int var_17 = 7799121784707486089ULL;
unsigned int var_18 = 860530910U;
unsigned short var_19 = (unsigned short)41519;
void init() {
}

void checksum() {
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
