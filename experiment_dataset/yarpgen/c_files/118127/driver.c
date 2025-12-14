#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)46;
unsigned long long int var_3 = 15006257204183281568ULL;
signed char var_8 = (signed char)-37;
long long int var_11 = -4683501206696774236LL;
_Bool var_13 = (_Bool)0;
unsigned long long int var_15 = 8852741427586306938ULL;
int zero = 0;
unsigned short var_16 = (unsigned short)22461;
unsigned char var_17 = (unsigned char)36;
unsigned short var_18 = (unsigned short)45289;
long long int var_19 = -2701994270688096862LL;
unsigned long long int var_20 = 7834546530038974783ULL;
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
