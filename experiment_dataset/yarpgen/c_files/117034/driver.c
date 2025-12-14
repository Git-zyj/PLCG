#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)479;
unsigned short var_5 = (unsigned short)50012;
unsigned long long int var_7 = 3960381850926372540ULL;
unsigned char var_8 = (unsigned char)241;
int var_9 = -1555427765;
short var_10 = (short)11265;
unsigned char var_12 = (unsigned char)129;
long long int var_13 = -1223953265378855710LL;
int zero = 0;
unsigned short var_17 = (unsigned short)29205;
signed char var_18 = (signed char)-103;
unsigned int var_19 = 341328535U;
void init() {
}

void checksum() {
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
