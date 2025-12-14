#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)22412;
int var_2 = -307248922;
signed char var_3 = (signed char)9;
int var_4 = 910966827;
unsigned long long int var_5 = 7459409031993593494ULL;
unsigned long long int var_8 = 17626547529198007109ULL;
short var_9 = (short)6132;
int zero = 0;
unsigned long long int var_10 = 11487490312679650091ULL;
unsigned char var_11 = (unsigned char)224;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
