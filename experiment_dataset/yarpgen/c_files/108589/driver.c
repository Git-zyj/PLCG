#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1380287238;
unsigned int var_2 = 920855453U;
_Bool var_4 = (_Bool)0;
unsigned short var_6 = (unsigned short)42841;
int var_7 = 253397587;
unsigned short var_10 = (unsigned short)23944;
int var_12 = -1657962762;
int zero = 0;
long long int var_15 = -465773403888041186LL;
int var_16 = -1636675484;
long long int var_17 = 6419384925151042037LL;
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
