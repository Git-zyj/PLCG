#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)48292;
unsigned long long int var_5 = 10352431142634610391ULL;
unsigned long long int var_7 = 6393024658344165586ULL;
long long int var_9 = 6183430771234801491LL;
unsigned short var_10 = (unsigned short)23306;
unsigned int var_17 = 2872501079U;
int zero = 0;
unsigned short var_18 = (unsigned short)51843;
long long int var_19 = 564940420646322268LL;
unsigned long long int var_20 = 17445275145629517670ULL;
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
