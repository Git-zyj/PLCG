#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 9060915776974660446LL;
unsigned short var_4 = (unsigned short)3726;
unsigned long long int var_10 = 2295267858750416921ULL;
int var_11 = -75495562;
unsigned long long int var_13 = 5086429046233570785ULL;
int zero = 0;
short var_14 = (short)17257;
unsigned short var_15 = (unsigned short)60568;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
