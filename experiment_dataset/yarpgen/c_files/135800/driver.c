#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)-26764;
short var_6 = (short)2808;
short var_10 = (short)23657;
unsigned short var_11 = (unsigned short)29339;
_Bool var_17 = (_Bool)1;
int zero = 0;
_Bool var_19 = (_Bool)1;
long long int var_20 = 6470363100058784266LL;
int var_21 = 1425012625;
_Bool var_22 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
