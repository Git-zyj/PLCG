#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)198;
unsigned long long int var_5 = 6000895820628205194ULL;
signed char var_6 = (signed char)109;
long long int var_8 = 1810313692918782713LL;
int zero = 0;
unsigned char var_10 = (unsigned char)148;
unsigned short var_11 = (unsigned short)64000;
signed char var_12 = (signed char)26;
unsigned char var_13 = (unsigned char)29;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
