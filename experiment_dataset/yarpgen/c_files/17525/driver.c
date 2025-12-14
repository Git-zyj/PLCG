#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1747742521U;
long long int var_1 = -5684661763577677625LL;
unsigned int var_2 = 887302353U;
unsigned short var_5 = (unsigned short)18014;
signed char var_6 = (signed char)-67;
unsigned int var_8 = 310374041U;
unsigned long long int var_9 = 6606094232787815416ULL;
long long int var_10 = 3790858901414057190LL;
short var_11 = (short)29192;
unsigned long long int var_12 = 18237821423144038042ULL;
long long int var_13 = -9113661061088288304LL;
unsigned short var_14 = (unsigned short)19755;
unsigned long long int var_15 = 7922438369654767459ULL;
unsigned long long int var_16 = 13272107462392484272ULL;
int zero = 0;
unsigned int var_17 = 1483833291U;
unsigned short var_18 = (unsigned short)3765;
short var_19 = (short)-21186;
unsigned long long int var_20 = 11196402510752634413ULL;
long long int var_21 = 9069437999166119174LL;
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
