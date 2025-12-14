#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-22;
_Bool var_1 = (_Bool)0;
long long int var_3 = -2828273647349778401LL;
unsigned short var_4 = (unsigned short)44785;
unsigned int var_5 = 1915763825U;
short var_7 = (short)-26896;
unsigned int var_8 = 3920409852U;
int var_9 = -1124161540;
_Bool var_10 = (_Bool)0;
signed char var_11 = (signed char)37;
signed char var_12 = (signed char)108;
unsigned short var_13 = (unsigned short)48898;
int zero = 0;
_Bool var_14 = (_Bool)0;
_Bool var_15 = (_Bool)0;
unsigned short var_16 = (unsigned short)22224;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
