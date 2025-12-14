#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3326760442U;
unsigned char var_2 = (unsigned char)214;
long long int var_3 = 7936544168621805219LL;
signed char var_4 = (signed char)-105;
short var_10 = (short)20193;
unsigned int var_12 = 3164628140U;
int zero = 0;
unsigned char var_17 = (unsigned char)103;
unsigned int var_18 = 4180244628U;
long long int var_19 = 3172000478724529357LL;
long long int var_20 = -1297259631373489368LL;
void init() {
}

void checksum() {
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
