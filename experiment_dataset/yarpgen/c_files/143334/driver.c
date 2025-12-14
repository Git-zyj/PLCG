#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3982808571U;
unsigned char var_4 = (unsigned char)190;
unsigned char var_5 = (unsigned char)111;
unsigned char var_7 = (unsigned char)88;
unsigned long long int var_9 = 2724281751415550601ULL;
unsigned long long int var_16 = 6627538455884469086ULL;
unsigned long long int var_18 = 9200123693626487093ULL;
int zero = 0;
int var_19 = 399964886;
unsigned long long int var_20 = 16913061227298138395ULL;
unsigned long long int var_21 = 4952042790491888869ULL;
_Bool var_22 = (_Bool)1;
unsigned short var_23 = (unsigned short)40270;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
