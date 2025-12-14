#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)255;
unsigned int var_5 = 1921912223U;
long long int var_6 = -698290825868940047LL;
int var_9 = -1009805324;
int var_10 = 429849342;
int var_13 = -1692126086;
int zero = 0;
unsigned long long int var_17 = 3050970714146971068ULL;
unsigned int var_18 = 756855542U;
short var_19 = (short)2662;
unsigned short var_20 = (unsigned short)17565;
long long int var_21 = -6309689957467134018LL;
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
