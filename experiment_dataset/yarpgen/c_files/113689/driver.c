#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-127;
signed char var_6 = (signed char)-107;
signed char var_7 = (signed char)-4;
unsigned char var_12 = (unsigned char)90;
unsigned short var_13 = (unsigned short)48921;
int zero = 0;
long long int var_15 = -2895341391289550478LL;
_Bool var_16 = (_Bool)1;
short var_17 = (short)22595;
_Bool var_18 = (_Bool)0;
void init() {
}

void checksum() {
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
