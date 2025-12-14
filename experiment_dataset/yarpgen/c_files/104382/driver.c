#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned short var_3 = (unsigned short)52000;
short var_4 = (short)12322;
unsigned short var_5 = (unsigned short)31162;
signed char var_9 = (signed char)17;
int var_11 = 497679979;
unsigned char var_13 = (unsigned char)111;
unsigned long long int var_16 = 9399799688820629869ULL;
int zero = 0;
long long int var_18 = -2981620734540743127LL;
unsigned long long int var_19 = 13080773955437079069ULL;
unsigned long long int var_20 = 12969379088120870143ULL;
void init() {
}

void checksum() {
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
