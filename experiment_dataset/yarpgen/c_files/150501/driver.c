#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
long long int var_3 = -3867527135758548419LL;
_Bool var_4 = (_Bool)0;
unsigned short var_6 = (unsigned short)7806;
long long int var_7 = 8323955495899723093LL;
unsigned short var_11 = (unsigned short)51342;
int zero = 0;
unsigned long long int var_12 = 10996631690636983959ULL;
unsigned char var_13 = (unsigned char)190;
short var_14 = (short)-10452;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
