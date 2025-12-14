#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -1302914236879332769LL;
unsigned int var_2 = 3084649515U;
_Bool var_3 = (_Bool)1;
unsigned char var_7 = (unsigned char)30;
int var_10 = 98632386;
unsigned long long int var_12 = 5746537336501002050ULL;
unsigned long long int var_14 = 1265829431221368770ULL;
int zero = 0;
long long int var_15 = -2649444338370984101LL;
unsigned long long int var_16 = 15036364152094915892ULL;
short var_17 = (short)-6708;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
