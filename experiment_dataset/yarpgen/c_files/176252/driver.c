#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3875098718U;
int var_2 = -430879745;
short var_3 = (short)11116;
short var_5 = (short)22317;
unsigned char var_6 = (unsigned char)131;
short var_8 = (short)12762;
unsigned long long int var_9 = 10339601607334515912ULL;
int var_10 = -921162089;
unsigned int var_11 = 3310230957U;
unsigned int var_12 = 1683464905U;
int var_13 = 436513354;
unsigned long long int var_15 = 11357984966079046794ULL;
int zero = 0;
unsigned char var_16 = (unsigned char)208;
unsigned short var_17 = (unsigned short)60137;
unsigned char var_18 = (unsigned char)225;
unsigned int var_19 = 428304162U;
int var_20 = -366548841;
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
