#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)89;
signed char var_2 = (signed char)60;
int var_5 = -355491708;
unsigned int var_8 = 1020166993U;
short var_9 = (short)20463;
unsigned short var_10 = (unsigned short)52519;
unsigned int var_12 = 1495666835U;
unsigned char var_13 = (unsigned char)16;
unsigned short var_14 = (unsigned short)27785;
_Bool var_15 = (_Bool)0;
int zero = 0;
unsigned short var_16 = (unsigned short)28570;
unsigned char var_17 = (unsigned char)119;
long long int var_18 = 1389462543106498729LL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
