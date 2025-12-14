#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)62534;
unsigned char var_5 = (unsigned char)204;
unsigned long long int var_6 = 940850513853232395ULL;
long long int var_7 = -7980339029182940537LL;
unsigned int var_8 = 2493949449U;
signed char var_9 = (signed char)-124;
signed char var_10 = (signed char)-54;
unsigned char var_11 = (unsigned char)97;
unsigned long long int var_15 = 10693053003456807662ULL;
int zero = 0;
unsigned char var_16 = (unsigned char)69;
unsigned long long int var_17 = 5747220595820431266ULL;
unsigned long long int var_18 = 5962200659841539689ULL;
void init() {
}

void checksum() {
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
