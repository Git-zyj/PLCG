#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 283355823U;
long long int var_2 = 2939601020542342500LL;
unsigned short var_3 = (unsigned short)7072;
unsigned char var_6 = (unsigned char)76;
unsigned long long int var_9 = 2774868722998139221ULL;
unsigned int var_11 = 3019639824U;
signed char var_13 = (signed char)102;
short var_16 = (short)-17147;
int zero = 0;
short var_19 = (short)3888;
unsigned int var_20 = 2219605692U;
unsigned char var_21 = (unsigned char)110;
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
