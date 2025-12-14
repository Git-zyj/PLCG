#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1745980365;
short var_1 = (short)24460;
unsigned char var_2 = (unsigned char)189;
short var_3 = (short)-27560;
signed char var_4 = (signed char)-26;
unsigned char var_5 = (unsigned char)116;
unsigned char var_6 = (unsigned char)187;
short var_7 = (short)-5068;
signed char var_8 = (signed char)-120;
short var_9 = (short)-31056;
signed char var_10 = (signed char)89;
unsigned char var_11 = (unsigned char)60;
unsigned char var_12 = (unsigned char)188;
unsigned char var_14 = (unsigned char)1;
_Bool var_15 = (_Bool)0;
int zero = 0;
unsigned short var_16 = (unsigned short)49148;
unsigned int var_17 = 797801674U;
unsigned int var_18 = 3680658977U;
short var_19 = (short)10448;
void init() {
}

void checksum() {
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
