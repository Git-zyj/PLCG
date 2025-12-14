#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_6 = 7697679915422700653ULL;
signed char var_15 = (signed char)42;
int zero = 0;
unsigned char var_18 = (unsigned char)90;
unsigned short var_19 = (unsigned short)29684;
unsigned long long int var_20 = 13491433614790785137ULL;
unsigned char var_21 = (unsigned char)134;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
