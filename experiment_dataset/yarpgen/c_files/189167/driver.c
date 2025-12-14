#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)59458;
unsigned long long int var_1 = 10201730106013130034ULL;
unsigned long long int var_4 = 7295968465116711835ULL;
signed char var_5 = (signed char)-115;
int var_9 = 739185464;
unsigned int var_10 = 4285681312U;
unsigned char var_11 = (unsigned char)170;
signed char var_12 = (signed char)29;
long long int var_13 = -2598425130850671569LL;
unsigned char var_14 = (unsigned char)207;
signed char var_16 = (signed char)9;
unsigned char var_17 = (unsigned char)52;
int zero = 0;
unsigned short var_18 = (unsigned short)6396;
int var_19 = 785164976;
void init() {
}

void checksum() {
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
