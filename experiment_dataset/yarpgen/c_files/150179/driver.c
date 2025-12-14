#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)52373;
int var_5 = -784663938;
unsigned long long int var_8 = 12716964404263697318ULL;
int zero = 0;
long long int var_17 = 6780236703475448535LL;
int var_18 = 1659835112;
unsigned long long int var_19 = 17604989065022997459ULL;
unsigned short var_20 = (unsigned short)35219;
signed char var_21 = (signed char)98;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
