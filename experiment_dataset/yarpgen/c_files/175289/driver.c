#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
short var_2 = (short)-24613;
short var_3 = (short)7075;
unsigned short var_4 = (unsigned short)14574;
unsigned char var_11 = (unsigned char)181;
int zero = 0;
unsigned short var_14 = (unsigned short)56635;
short var_15 = (short)17514;
long long int var_16 = 3315461713264855824LL;
int var_17 = -10838819;
unsigned short var_18 = (unsigned short)53642;
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
