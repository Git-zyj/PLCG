#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)80;
unsigned int var_2 = 3172063117U;
unsigned short var_3 = (unsigned short)44218;
int var_7 = 2038960833;
signed char var_8 = (signed char)103;
signed char var_9 = (signed char)-118;
int var_10 = -181881875;
_Bool var_12 = (_Bool)1;
unsigned short var_13 = (unsigned short)29532;
unsigned short var_14 = (unsigned short)6191;
int var_15 = -782860563;
int var_16 = 106303206;
int zero = 0;
int var_17 = 2032780360;
signed char var_18 = (signed char)-94;
void init() {
}

void checksum() {
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
