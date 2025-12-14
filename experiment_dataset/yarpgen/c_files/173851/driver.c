#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -8793492563157760224LL;
unsigned int var_4 = 2502758692U;
unsigned int var_10 = 4256091679U;
unsigned char var_11 = (unsigned char)237;
signed char var_13 = (signed char)-78;
unsigned short var_15 = (unsigned short)12980;
int zero = 0;
int var_18 = 399317001;
unsigned long long int var_19 = 473306370690374335ULL;
short var_20 = (short)12417;
void init() {
}

void checksum() {
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
