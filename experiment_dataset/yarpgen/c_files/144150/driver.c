#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)172;
short var_1 = (short)12431;
unsigned short var_4 = (unsigned short)8741;
long long int var_7 = -7053429441340499280LL;
unsigned char var_9 = (unsigned char)134;
unsigned char var_10 = (unsigned char)219;
int zero = 0;
long long int var_11 = 4373307737008155238LL;
unsigned short var_12 = (unsigned short)54852;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
