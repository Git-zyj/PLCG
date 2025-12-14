#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)504;
unsigned int var_1 = 3867424440U;
unsigned char var_2 = (unsigned char)171;
unsigned short var_3 = (unsigned short)46051;
unsigned short var_4 = (unsigned short)38111;
unsigned char var_5 = (unsigned char)207;
unsigned long long int var_6 = 15777133549855231358ULL;
unsigned short var_7 = (unsigned short)40822;
signed char var_8 = (signed char)-58;
short var_9 = (short)-28325;
unsigned long long int var_10 = 15830102241984780760ULL;
unsigned long long int var_11 = 5344612294201412473ULL;
unsigned short var_12 = (unsigned short)17873;
short var_13 = (short)9084;
int zero = 0;
unsigned int var_15 = 3182967446U;
unsigned long long int var_16 = 642992392689169830ULL;
unsigned short var_17 = (unsigned short)62805;
unsigned char var_18 = (unsigned char)155;
short var_19 = (short)14399;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
