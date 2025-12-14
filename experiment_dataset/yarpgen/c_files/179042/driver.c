#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)10971;
unsigned short var_2 = (unsigned short)56282;
unsigned int var_4 = 934826598U;
unsigned long long int var_6 = 13867294366371401988ULL;
unsigned char var_7 = (unsigned char)31;
unsigned long long int var_8 = 12974377403571226049ULL;
unsigned int var_9 = 760329357U;
int var_10 = -1221284858;
unsigned int var_11 = 3542001943U;
unsigned char var_12 = (unsigned char)118;
long long int var_13 = 3426522410604736829LL;
short var_14 = (short)-2324;
int zero = 0;
_Bool var_15 = (_Bool)0;
short var_16 = (short)23837;
void init() {
}

void checksum() {
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
