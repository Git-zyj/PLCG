#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -3473022725649319234LL;
unsigned short var_1 = (unsigned short)39711;
unsigned short var_2 = (unsigned short)26650;
unsigned short var_3 = (unsigned short)37637;
unsigned char var_4 = (unsigned char)205;
unsigned short var_5 = (unsigned short)35025;
int var_8 = 2077424975;
unsigned char var_9 = (unsigned char)166;
unsigned short var_10 = (unsigned short)60228;
int zero = 0;
unsigned char var_11 = (unsigned char)16;
unsigned short var_12 = (unsigned short)42621;
unsigned char var_13 = (unsigned char)125;
unsigned char var_14 = (unsigned char)15;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
