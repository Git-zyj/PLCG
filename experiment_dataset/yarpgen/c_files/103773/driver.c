#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 10642124576365581691ULL;
unsigned short var_4 = (unsigned short)44201;
unsigned short var_5 = (unsigned short)4780;
unsigned char var_6 = (unsigned char)75;
unsigned char var_7 = (unsigned char)123;
short var_8 = (short)-17953;
unsigned char var_9 = (unsigned char)59;
unsigned long long int var_12 = 8996392262374430467ULL;
signed char var_13 = (signed char)-91;
unsigned long long int var_14 = 11038010636445492468ULL;
int zero = 0;
_Bool var_16 = (_Bool)0;
unsigned long long int var_17 = 15424935150118026494ULL;
unsigned int var_18 = 2206300646U;
_Bool var_19 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
