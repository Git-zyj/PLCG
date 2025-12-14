#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)50901;
unsigned char var_1 = (unsigned char)234;
signed char var_3 = (signed char)69;
int var_5 = -1445808594;
int var_8 = -914117580;
unsigned char var_10 = (unsigned char)189;
int zero = 0;
unsigned long long int var_11 = 2906065738684052222ULL;
unsigned int var_12 = 3783639424U;
unsigned char var_13 = (unsigned char)19;
void init() {
}

void checksum() {
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
