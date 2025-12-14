#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)116;
long long int var_2 = -6426531899594073954LL;
unsigned int var_3 = 2386319428U;
_Bool var_4 = (_Bool)1;
unsigned char var_5 = (unsigned char)75;
long long int var_6 = -3008072752602736839LL;
unsigned char var_9 = (unsigned char)246;
int zero = 0;
signed char var_10 = (signed char)-17;
unsigned char var_11 = (unsigned char)10;
short var_12 = (short)3479;
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
