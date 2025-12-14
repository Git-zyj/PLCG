#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)46284;
_Bool var_1 = (_Bool)0;
unsigned short var_2 = (unsigned short)33603;
unsigned int var_3 = 77281131U;
short var_5 = (short)-9873;
short var_6 = (short)27717;
signed char var_7 = (signed char)-63;
unsigned char var_9 = (unsigned char)85;
unsigned char var_10 = (unsigned char)18;
unsigned short var_11 = (unsigned short)63360;
int zero = 0;
int var_12 = -1228853159;
unsigned long long int var_13 = 7995898629478506989ULL;
unsigned long long int var_14 = 3146153533671147645ULL;
signed char var_15 = (signed char)108;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
