#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 7437828421044355398LL;
unsigned int var_1 = 2649289382U;
signed char var_2 = (signed char)-111;
signed char var_3 = (signed char)-77;
unsigned short var_4 = (unsigned short)46156;
unsigned short var_6 = (unsigned short)25136;
signed char var_7 = (signed char)-127;
short var_8 = (short)-26112;
short var_9 = (short)-7871;
unsigned long long int var_10 = 17264447993395157702ULL;
unsigned char var_14 = (unsigned char)122;
_Bool var_15 = (_Bool)1;
int zero = 0;
short var_16 = (short)-8125;
long long int var_17 = 8965028079418607098LL;
long long int var_18 = -618049232706292325LL;
unsigned short var_19 = (unsigned short)65296;
unsigned char var_20 = (unsigned char)243;
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
