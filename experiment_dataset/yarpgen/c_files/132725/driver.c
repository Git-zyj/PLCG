#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-30412;
unsigned char var_1 = (unsigned char)185;
_Bool var_2 = (_Bool)0;
unsigned int var_3 = 873225565U;
signed char var_7 = (signed char)92;
unsigned char var_8 = (unsigned char)238;
int var_9 = -199269872;
unsigned char var_10 = (unsigned char)190;
short var_13 = (short)-15281;
_Bool var_14 = (_Bool)0;
short var_15 = (short)-16526;
int zero = 0;
int var_16 = 1619833807;
signed char var_17 = (signed char)-38;
short var_18 = (short)-5731;
unsigned int var_19 = 1377565022U;
unsigned short var_20 = (unsigned short)58265;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
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
