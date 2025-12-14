#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 2753822772688214556LL;
long long int var_2 = -1754393000355211462LL;
unsigned int var_3 = 310110906U;
_Bool var_6 = (_Bool)1;
int var_7 = -130009450;
unsigned short var_8 = (unsigned short)11244;
int var_9 = -829239261;
signed char var_10 = (signed char)56;
unsigned short var_11 = (unsigned short)6654;
signed char var_14 = (signed char)62;
int zero = 0;
short var_15 = (short)24608;
signed char var_16 = (signed char)-67;
unsigned short var_17 = (unsigned short)61807;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
