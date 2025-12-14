#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -262200611688862887LL;
unsigned int var_2 = 1310535495U;
long long int var_3 = -3123168983585955142LL;
long long int var_4 = -455312062707420272LL;
unsigned char var_5 = (unsigned char)100;
int var_6 = 1953303466;
unsigned int var_7 = 593231957U;
int var_8 = -1717957452;
signed char var_11 = (signed char)102;
int zero = 0;
unsigned int var_14 = 1021048435U;
signed char var_15 = (signed char)-105;
long long int var_16 = -2107343489912236670LL;
long long int var_17 = -4362652007110434173LL;
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
