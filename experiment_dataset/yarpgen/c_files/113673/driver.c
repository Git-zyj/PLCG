#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)233;
unsigned char var_3 = (unsigned char)193;
_Bool var_4 = (_Bool)0;
unsigned char var_5 = (unsigned char)230;
unsigned long long int var_6 = 16252047910566248806ULL;
unsigned short var_8 = (unsigned short)38323;
unsigned long long int var_12 = 5575163210759685022ULL;
short var_13 = (short)-7218;
unsigned char var_15 = (unsigned char)48;
int zero = 0;
short var_16 = (short)27292;
short var_17 = (short)25479;
unsigned short var_18 = (unsigned short)22813;
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
