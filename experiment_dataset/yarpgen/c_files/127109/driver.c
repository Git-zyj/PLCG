#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_6 = (short)23858;
unsigned char var_7 = (unsigned char)176;
long long int var_8 = 2831000225609011637LL;
unsigned char var_11 = (unsigned char)128;
short var_12 = (short)-5366;
long long int var_16 = -959046538030837510LL;
unsigned short var_17 = (unsigned short)8313;
unsigned short var_18 = (unsigned short)52983;
int zero = 0;
long long int var_19 = 8039002986599638224LL;
unsigned short var_20 = (unsigned short)28121;
int var_21 = 1406549141;
void init() {
}

void checksum() {
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
