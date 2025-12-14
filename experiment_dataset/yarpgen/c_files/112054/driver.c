#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 12580517964041074719ULL;
unsigned long long int var_4 = 10897154770573829190ULL;
_Bool var_5 = (_Bool)0;
unsigned char var_6 = (unsigned char)134;
unsigned char var_8 = (unsigned char)52;
unsigned long long int var_10 = 12919329141118345929ULL;
unsigned char var_12 = (unsigned char)70;
int zero = 0;
unsigned long long int var_15 = 18090434159218963573ULL;
unsigned long long int var_16 = 16370287620939847023ULL;
unsigned char var_17 = (unsigned char)255;
long long int var_18 = -858371419437079552LL;
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
