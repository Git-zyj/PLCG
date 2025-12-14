#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1209929170;
unsigned long long int var_1 = 12063904291233259928ULL;
long long int var_2 = 8590780545883481369LL;
int var_6 = -1052603765;
long long int var_7 = 853967812727696032LL;
unsigned int var_8 = 3856005548U;
unsigned short var_11 = (unsigned short)52209;
short var_12 = (short)-21516;
short var_14 = (short)-11532;
short var_17 = (short)28627;
int zero = 0;
signed char var_18 = (signed char)-109;
short var_19 = (short)-358;
short var_20 = (short)-2175;
_Bool var_21 = (_Bool)0;
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
