#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)18607;
short var_2 = (short)-2472;
unsigned short var_3 = (unsigned short)63656;
signed char var_4 = (signed char)113;
unsigned int var_7 = 4006773055U;
signed char var_9 = (signed char)-61;
unsigned short var_10 = (unsigned short)20292;
_Bool var_11 = (_Bool)1;
unsigned char var_12 = (unsigned char)62;
long long int var_14 = -1050353858357102266LL;
int zero = 0;
_Bool var_16 = (_Bool)1;
short var_17 = (short)-6932;
unsigned short var_18 = (unsigned short)10279;
_Bool var_19 = (_Bool)1;
signed char var_20 = (signed char)108;
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
