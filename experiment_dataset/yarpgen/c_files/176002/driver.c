#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)123;
unsigned short var_1 = (unsigned short)40647;
int var_3 = 674920818;
unsigned char var_6 = (unsigned char)166;
unsigned short var_7 = (unsigned short)35461;
unsigned char var_8 = (unsigned char)167;
unsigned short var_9 = (unsigned short)59101;
unsigned short var_11 = (unsigned short)666;
int zero = 0;
unsigned short var_16 = (unsigned short)5965;
int var_17 = -1977013764;
signed char var_18 = (signed char)13;
unsigned long long int var_19 = 5433120832185745300ULL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
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
