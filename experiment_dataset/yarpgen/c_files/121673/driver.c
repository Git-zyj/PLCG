#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)153;
unsigned char var_4 = (unsigned char)34;
unsigned long long int var_6 = 8841374183918246275ULL;
unsigned short var_9 = (unsigned short)46312;
int zero = 0;
signed char var_10 = (signed char)-28;
unsigned short var_11 = (unsigned short)22629;
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
