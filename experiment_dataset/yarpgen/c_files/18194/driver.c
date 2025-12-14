#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)66;
unsigned long long int var_1 = 13040390413045030626ULL;
unsigned short var_2 = (unsigned short)28382;
unsigned short var_4 = (unsigned short)64206;
unsigned int var_8 = 2148092136U;
unsigned long long int var_9 = 8834844659186757155ULL;
unsigned char var_12 = (unsigned char)129;
short var_13 = (short)-8875;
unsigned int var_14 = 1990670328U;
unsigned short var_15 = (unsigned short)42783;
int zero = 0;
unsigned short var_16 = (unsigned short)4756;
unsigned short var_17 = (unsigned short)25081;
long long int var_18 = -600823051963677588LL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
