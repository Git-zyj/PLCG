#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 4169175013124930690LL;
_Bool var_2 = (_Bool)1;
unsigned short var_3 = (unsigned short)35113;
unsigned short var_4 = (unsigned short)2812;
_Bool var_5 = (_Bool)1;
signed char var_9 = (signed char)34;
unsigned char var_10 = (unsigned char)2;
unsigned long long int var_13 = 9576160062049792535ULL;
unsigned short var_14 = (unsigned short)5317;
int zero = 0;
_Bool var_15 = (_Bool)0;
long long int var_16 = 3794079052601428633LL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
