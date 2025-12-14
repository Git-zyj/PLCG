#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1660728434;
unsigned short var_1 = (unsigned short)26306;
_Bool var_2 = (_Bool)0;
long long int var_4 = -5272882654973931638LL;
signed char var_5 = (signed char)51;
long long int var_7 = 8213542268244059459LL;
unsigned char var_10 = (unsigned char)103;
_Bool var_11 = (_Bool)1;
int var_13 = -598291601;
unsigned int var_15 = 2628167834U;
short var_16 = (short)-4442;
_Bool var_17 = (_Bool)1;
int zero = 0;
signed char var_20 = (signed char)116;
int var_21 = 828503249;
short var_22 = (short)2401;
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
