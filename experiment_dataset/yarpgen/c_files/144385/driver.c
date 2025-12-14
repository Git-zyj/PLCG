#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)64;
short var_1 = (short)-16142;
int var_2 = 37354541;
unsigned short var_4 = (unsigned short)16251;
_Bool var_5 = (_Bool)0;
long long int var_6 = 1150662073474515383LL;
unsigned short var_8 = (unsigned short)18649;
short var_9 = (short)-19099;
unsigned char var_10 = (unsigned char)185;
short var_11 = (short)-11160;
signed char var_12 = (signed char)106;
long long int var_14 = 8042834626129926009LL;
int zero = 0;
unsigned char var_16 = (unsigned char)120;
unsigned short var_17 = (unsigned short)11967;
unsigned short var_18 = (unsigned short)48631;
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
