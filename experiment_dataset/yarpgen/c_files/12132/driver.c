#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
unsigned int var_3 = 2836472568U;
unsigned short var_4 = (unsigned short)39288;
_Bool var_5 = (_Bool)1;
int var_7 = -1246107893;
signed char var_8 = (signed char)-100;
unsigned long long int var_9 = 15523163094744823970ULL;
unsigned char var_11 = (unsigned char)188;
int zero = 0;
_Bool var_14 = (_Bool)0;
long long int var_15 = 3532964998945902682LL;
short var_16 = (short)548;
long long int var_17 = -5460214749124096952LL;
unsigned char var_18 = (unsigned char)55;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
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
