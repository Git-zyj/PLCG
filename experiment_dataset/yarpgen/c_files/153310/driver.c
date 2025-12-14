#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-56;
unsigned int var_1 = 2189254224U;
int var_2 = -525759906;
unsigned int var_3 = 4010714821U;
unsigned int var_4 = 1450901874U;
_Bool var_6 = (_Bool)0;
long long int var_7 = -4373050918387435150LL;
long long int var_8 = -6598628734832757826LL;
unsigned char var_10 = (unsigned char)53;
unsigned short var_12 = (unsigned short)9956;
long long int var_13 = 9120156246271373471LL;
unsigned short var_14 = (unsigned short)52390;
long long int var_15 = -522139720132454098LL;
int var_17 = 840955858;
int zero = 0;
int var_19 = -1350201204;
unsigned short var_20 = (unsigned short)10621;
void init() {
}

void checksum() {
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
