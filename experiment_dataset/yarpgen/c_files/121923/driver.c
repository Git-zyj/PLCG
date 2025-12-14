#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 15359292295001893208ULL;
unsigned long long int var_5 = 14373617399366659226ULL;
unsigned long long int var_7 = 12864396638416236788ULL;
_Bool var_8 = (_Bool)1;
unsigned int var_9 = 1488513798U;
unsigned long long int var_11 = 9795347452592601497ULL;
unsigned long long int var_12 = 17265312261834027381ULL;
int zero = 0;
long long int var_16 = 9120867101214693561LL;
unsigned char var_17 = (unsigned char)181;
unsigned short var_18 = (unsigned short)32731;
unsigned long long int var_19 = 872306984731896108ULL;
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
