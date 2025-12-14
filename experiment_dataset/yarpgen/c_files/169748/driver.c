#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1830890852;
unsigned short var_2 = (unsigned short)64208;
int var_3 = -1508911380;
unsigned char var_4 = (unsigned char)135;
unsigned int var_5 = 3072343129U;
unsigned char var_6 = (unsigned char)106;
unsigned short var_9 = (unsigned short)59212;
unsigned char var_10 = (unsigned char)202;
unsigned char var_13 = (unsigned char)10;
int zero = 0;
unsigned int var_14 = 2721199652U;
unsigned short var_15 = (unsigned short)35854;
unsigned short var_16 = (unsigned short)3406;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
