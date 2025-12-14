#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)11770;
signed char var_2 = (signed char)-25;
unsigned short var_5 = (unsigned short)42602;
_Bool var_6 = (_Bool)0;
unsigned short var_7 = (unsigned short)2905;
unsigned short var_8 = (unsigned short)47899;
signed char var_9 = (signed char)40;
short var_12 = (short)-15286;
short var_14 = (short)-22642;
int zero = 0;
signed char var_16 = (signed char)-118;
unsigned short var_17 = (unsigned short)54233;
int var_18 = 1739105620;
void init() {
}

void checksum() {
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
