#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_5 = (short)27715;
unsigned long long int var_9 = 9939355767660327301ULL;
unsigned short var_12 = (unsigned short)43570;
signed char var_13 = (signed char)-31;
int var_14 = 552342888;
_Bool var_15 = (_Bool)0;
unsigned int var_16 = 2605050937U;
short var_17 = (short)21728;
unsigned short var_18 = (unsigned short)65022;
int zero = 0;
signed char var_19 = (signed char)91;
unsigned long long int var_20 = 9398422463150837076ULL;
unsigned int var_21 = 3835005847U;
void init() {
}

void checksum() {
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
