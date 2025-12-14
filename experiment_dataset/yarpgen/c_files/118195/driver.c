#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)130;
unsigned int var_1 = 2565773787U;
unsigned char var_2 = (unsigned char)129;
int var_4 = 1119573455;
signed char var_5 = (signed char)-123;
unsigned short var_6 = (unsigned short)51399;
long long int var_11 = 3766813234380810929LL;
int zero = 0;
unsigned short var_13 = (unsigned short)4472;
unsigned int var_14 = 3965577604U;
short var_15 = (short)-32223;
long long int var_16 = 2883923163946191317LL;
unsigned char var_17 = (unsigned char)180;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
