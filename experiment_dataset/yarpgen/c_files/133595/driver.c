#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_5 = -5788800391452654347LL;
unsigned char var_8 = (unsigned char)142;
signed char var_9 = (signed char)-73;
long long int var_10 = 9081033515649585652LL;
unsigned char var_12 = (unsigned char)35;
int zero = 0;
unsigned short var_14 = (unsigned short)4237;
unsigned char var_15 = (unsigned char)5;
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
