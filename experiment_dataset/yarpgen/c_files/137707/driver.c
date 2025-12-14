#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-109;
signed char var_1 = (signed char)27;
unsigned char var_5 = (unsigned char)185;
unsigned int var_7 = 4146560924U;
unsigned short var_8 = (unsigned short)1212;
unsigned long long int var_9 = 12947792845157132673ULL;
short var_10 = (short)-28714;
unsigned short var_11 = (unsigned short)2274;
long long int var_12 = -2696676674011504014LL;
long long int var_13 = -7080780558583334218LL;
int zero = 0;
unsigned char var_14 = (unsigned char)243;
signed char var_15 = (signed char)96;
signed char var_16 = (signed char)64;
_Bool var_17 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
