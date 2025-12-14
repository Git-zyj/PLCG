#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)9451;
signed char var_1 = (signed char)-118;
unsigned short var_5 = (unsigned short)19735;
_Bool var_6 = (_Bool)1;
unsigned char var_7 = (unsigned char)128;
unsigned short var_9 = (unsigned short)39695;
int var_10 = -5738505;
unsigned char var_11 = (unsigned char)201;
int var_12 = -19915633;
_Bool var_13 = (_Bool)1;
int var_14 = 1517271860;
int zero = 0;
signed char var_15 = (signed char)3;
int var_16 = -2075708426;
long long int var_17 = 4375745964905304400LL;
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
