#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)65401;
unsigned int var_2 = 2180981442U;
long long int var_4 = 1637907716785021810LL;
long long int var_9 = -5726101258276781442LL;
int zero = 0;
signed char var_10 = (signed char)51;
unsigned char var_11 = (unsigned char)159;
long long int var_12 = 2906513765640743797LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
