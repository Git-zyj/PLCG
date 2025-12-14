#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
_Bool var_1 = (_Bool)1;
_Bool var_3 = (_Bool)0;
unsigned int var_5 = 2860823590U;
long long int var_6 = -2509694403733580007LL;
_Bool var_8 = (_Bool)1;
unsigned short var_10 = (unsigned short)48312;
unsigned short var_11 = (unsigned short)57041;
unsigned char var_12 = (unsigned char)133;
_Bool var_14 = (_Bool)0;
int zero = 0;
signed char var_18 = (signed char)103;
_Bool var_19 = (_Bool)1;
unsigned short var_20 = (unsigned short)38604;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
