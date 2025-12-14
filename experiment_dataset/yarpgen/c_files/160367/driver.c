#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3088052037U;
_Bool var_1 = (_Bool)1;
int var_2 = 858342397;
int var_3 = 103338331;
_Bool var_4 = (_Bool)0;
unsigned short var_7 = (unsigned short)10475;
short var_8 = (short)-2804;
unsigned int var_9 = 3081732154U;
long long int var_10 = -5330765121045927257LL;
short var_11 = (short)15492;
long long int var_12 = -4134461348031289608LL;
signed char var_13 = (signed char)-43;
int zero = 0;
int var_14 = 1810711860;
unsigned long long int var_15 = 3518140691915243328ULL;
unsigned char var_16 = (unsigned char)40;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
