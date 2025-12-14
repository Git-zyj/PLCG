#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)48;
unsigned char var_1 = (unsigned char)232;
unsigned char var_2 = (unsigned char)145;
unsigned short var_3 = (unsigned short)25399;
signed char var_5 = (signed char)-119;
unsigned char var_6 = (unsigned char)175;
unsigned short var_7 = (unsigned short)48942;
unsigned short var_8 = (unsigned short)64064;
unsigned char var_9 = (unsigned char)103;
unsigned int var_11 = 2658441855U;
unsigned char var_12 = (unsigned char)200;
int zero = 0;
unsigned long long int var_13 = 7467196730194192927ULL;
unsigned int var_14 = 3081680424U;
unsigned long long int var_15 = 15962398033476693283ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
