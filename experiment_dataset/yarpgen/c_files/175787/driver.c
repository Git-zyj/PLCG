#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 11025148484838767382ULL;
signed char var_1 = (signed char)49;
unsigned char var_2 = (unsigned char)83;
long long int var_3 = 8691227001793034194LL;
_Bool var_5 = (_Bool)0;
unsigned int var_6 = 2163988554U;
int var_7 = 1413791294;
unsigned long long int var_8 = 13439145687193489624ULL;
unsigned int var_10 = 2278894902U;
int var_11 = 230140288;
unsigned short var_12 = (unsigned short)45298;
long long int var_14 = 5493991255530340583LL;
signed char var_16 = (signed char)-49;
int zero = 0;
unsigned char var_17 = (unsigned char)80;
unsigned int var_18 = 3843968105U;
_Bool var_19 = (_Bool)0;
_Bool var_20 = (_Bool)0;
long long int var_21 = 4745043539388547711LL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
