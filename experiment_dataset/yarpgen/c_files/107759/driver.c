#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-1401;
signed char var_3 = (signed char)-97;
unsigned char var_4 = (unsigned char)174;
signed char var_6 = (signed char)-40;
unsigned long long int var_7 = 8435944558813409225ULL;
unsigned int var_8 = 2842095292U;
unsigned int var_9 = 2663247092U;
unsigned short var_10 = (unsigned short)24662;
unsigned char var_14 = (unsigned char)241;
int zero = 0;
short var_17 = (short)-15783;
signed char var_18 = (signed char)-26;
int var_19 = 66809765;
_Bool var_20 = (_Bool)1;
unsigned char var_21 = (unsigned char)247;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
