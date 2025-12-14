#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 10477309708217067978ULL;
unsigned short var_2 = (unsigned short)16746;
unsigned char var_3 = (unsigned char)41;
int var_4 = -1309505047;
unsigned long long int var_5 = 10455269178259612478ULL;
short var_6 = (short)-16961;
unsigned char var_7 = (unsigned char)138;
unsigned short var_8 = (unsigned short)16382;
unsigned short var_9 = (unsigned short)29003;
unsigned long long int var_10 = 7994854179357754711ULL;
short var_11 = (short)-8882;
long long int var_12 = -7267607770235549336LL;
unsigned long long int var_13 = 3281391968313358315ULL;
int zero = 0;
unsigned short var_14 = (unsigned short)57902;
short var_15 = (short)5178;
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
