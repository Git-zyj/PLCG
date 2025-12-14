#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 4331435884167238624ULL;
int var_1 = 642670332;
signed char var_2 = (signed char)-58;
int var_3 = 1029173393;
unsigned char var_4 = (unsigned char)62;
_Bool var_8 = (_Bool)1;
unsigned long long int var_10 = 3787545957212686630ULL;
_Bool var_12 = (_Bool)0;
short var_13 = (short)19526;
int zero = 0;
_Bool var_14 = (_Bool)0;
unsigned short var_15 = (unsigned short)12314;
unsigned short var_16 = (unsigned short)64242;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
