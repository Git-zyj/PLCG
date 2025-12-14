#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -2366579497965788495LL;
long long int var_1 = -2157014340905838045LL;
unsigned char var_5 = (unsigned char)150;
signed char var_9 = (signed char)125;
unsigned short var_10 = (unsigned short)54180;
_Bool var_11 = (_Bool)1;
long long int var_12 = 1725637979709220945LL;
int zero = 0;
unsigned char var_15 = (unsigned char)146;
_Bool var_16 = (_Bool)0;
unsigned char var_17 = (unsigned char)233;
_Bool var_18 = (_Bool)0;
void init() {
}

void checksum() {
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
