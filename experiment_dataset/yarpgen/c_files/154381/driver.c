#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 3137814822521708584ULL;
unsigned long long int var_5 = 5621479071422097243ULL;
short var_7 = (short)27553;
unsigned long long int var_10 = 7058003040604149842ULL;
_Bool var_13 = (_Bool)0;
short var_15 = (short)8205;
int zero = 0;
short var_18 = (short)-10338;
unsigned char var_19 = (unsigned char)130;
long long int var_20 = -7755942394502973163LL;
void init() {
}

void checksum() {
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
