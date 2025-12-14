#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 10783078123197398731ULL;
long long int var_7 = 4249277457899962687LL;
long long int var_10 = 5521047854416917996LL;
unsigned char var_12 = (unsigned char)129;
unsigned char var_14 = (unsigned char)19;
signed char var_16 = (signed char)48;
int zero = 0;
short var_17 = (short)32195;
unsigned char var_18 = (unsigned char)212;
unsigned int var_19 = 365354773U;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
