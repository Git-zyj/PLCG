#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)173;
unsigned short var_1 = (unsigned short)13042;
unsigned short var_2 = (unsigned short)16156;
long long int var_3 = 8630406943950048585LL;
int var_4 = 1195428593;
int var_8 = 1375991542;
short var_10 = (short)32029;
short var_11 = (short)-397;
unsigned long long int var_12 = 5011155251889701323ULL;
int zero = 0;
_Bool var_13 = (_Bool)1;
short var_14 = (short)6045;
unsigned long long int var_15 = 13067245449938730976ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
