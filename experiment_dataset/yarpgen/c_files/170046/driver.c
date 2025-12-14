#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
short var_1 = (short)31714;
unsigned char var_2 = (unsigned char)178;
unsigned short var_3 = (unsigned short)46659;
unsigned long long int var_4 = 16797944866237715593ULL;
unsigned long long int var_5 = 17402173991891435486ULL;
short var_6 = (short)-24427;
unsigned short var_7 = (unsigned short)62030;
unsigned char var_8 = (unsigned char)214;
unsigned int var_9 = 144360581U;
long long int var_10 = -5331117600803158060LL;
unsigned long long int var_12 = 8790750211029099954ULL;
int zero = 0;
long long int var_14 = 8391022937953220352LL;
unsigned int var_15 = 2011190429U;
_Bool var_16 = (_Bool)1;
int var_17 = -2051609669;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
