#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 676866792;
unsigned char var_1 = (unsigned char)204;
_Bool var_5 = (_Bool)1;
unsigned short var_10 = (unsigned short)14561;
unsigned long long int var_11 = 3991343211863230721ULL;
int zero = 0;
long long int var_14 = 3420395857090032545LL;
signed char var_15 = (signed char)122;
int var_16 = 1942966173;
long long int var_17 = 5445780935865624416LL;
long long int var_18 = -3205459289169440168LL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
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
