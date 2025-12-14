#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -6260868452096307237LL;
unsigned int var_6 = 3633820411U;
unsigned int var_7 = 1786282887U;
unsigned int var_8 = 4171411663U;
short var_9 = (short)-1161;
unsigned int var_10 = 1801055863U;
signed char var_11 = (signed char)81;
int var_12 = -749929474;
unsigned char var_13 = (unsigned char)227;
long long int var_14 = -7227449541370526805LL;
int zero = 0;
_Bool var_15 = (_Bool)0;
unsigned short var_16 = (unsigned short)61745;
unsigned int var_17 = 4079115438U;
unsigned short var_18 = (unsigned short)36666;
unsigned int var_19 = 571832706U;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
