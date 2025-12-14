#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_5 = 9116692377179300423LL;
unsigned char var_7 = (unsigned char)39;
short var_8 = (short)8196;
signed char var_11 = (signed char)-55;
short var_15 = (short)-2602;
unsigned char var_17 = (unsigned char)143;
int zero = 0;
unsigned long long int var_18 = 18196979586217501432ULL;
unsigned char var_19 = (unsigned char)204;
void init() {
}

void checksum() {
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
