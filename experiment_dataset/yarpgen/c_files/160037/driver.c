#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3066051374U;
long long int var_2 = -494474916742328286LL;
long long int var_3 = 7844514294637161719LL;
short var_4 = (short)12787;
unsigned char var_5 = (unsigned char)140;
short var_9 = (short)16998;
unsigned char var_10 = (unsigned char)8;
short var_11 = (short)16972;
short var_13 = (short)7221;
unsigned short var_17 = (unsigned short)64854;
int zero = 0;
unsigned short var_20 = (unsigned short)30698;
unsigned long long int var_21 = 5886983594572823103ULL;
short var_22 = (short)-19535;
void init() {
}

void checksum() {
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
