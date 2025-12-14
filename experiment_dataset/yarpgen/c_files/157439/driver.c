#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-7311;
unsigned long long int var_1 = 4777849197538055669ULL;
unsigned int var_2 = 620746040U;
long long int var_3 = 2186708846353030323LL;
short var_4 = (short)-10422;
unsigned char var_6 = (unsigned char)30;
signed char var_7 = (signed char)78;
unsigned int var_8 = 3721186010U;
signed char var_9 = (signed char)-80;
long long int var_11 = 5473571189960181385LL;
unsigned long long int var_13 = 9452683883705627088ULL;
unsigned char var_16 = (unsigned char)140;
int var_17 = -190707610;
long long int var_18 = 5522832740795580223LL;
int zero = 0;
int var_20 = -1120610919;
long long int var_21 = -629782848109859293LL;
unsigned long long int var_22 = 14145444873802463012ULL;
short var_23 = (short)14442;
unsigned long long int var_24 = 2531394577998439981ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
