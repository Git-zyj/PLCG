#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 15662463673881888140ULL;
int var_1 = 1811547721;
_Bool var_2 = (_Bool)0;
unsigned char var_3 = (unsigned char)47;
unsigned long long int var_4 = 8964991279242323703ULL;
unsigned long long int var_5 = 4556016281468638759ULL;
unsigned char var_8 = (unsigned char)82;
_Bool var_11 = (_Bool)1;
short var_15 = (short)-24692;
int zero = 0;
unsigned char var_16 = (unsigned char)199;
int var_17 = 1434337418;
unsigned char var_18 = (unsigned char)75;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
