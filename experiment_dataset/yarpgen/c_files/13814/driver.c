#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1850075728;
unsigned short var_4 = (unsigned short)20141;
unsigned int var_7 = 3385582572U;
signed char var_9 = (signed char)-101;
unsigned int var_10 = 1796277099U;
long long int var_15 = -2816425638387354964LL;
int zero = 0;
int var_20 = 1801211317;
unsigned char var_21 = (unsigned char)61;
void init() {
}

void checksum() {
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
