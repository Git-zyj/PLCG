#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 2451364243936574018ULL;
signed char var_4 = (signed char)94;
signed char var_5 = (signed char)-17;
unsigned char var_7 = (unsigned char)169;
signed char var_8 = (signed char)30;
short var_9 = (short)31338;
unsigned short var_11 = (unsigned short)11789;
int zero = 0;
long long int var_12 = -7693164729397316466LL;
unsigned int var_13 = 2973742836U;
short var_14 = (short)-21220;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
