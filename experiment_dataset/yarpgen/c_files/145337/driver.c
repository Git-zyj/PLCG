#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 4285551429U;
unsigned long long int var_4 = 213240126747862066ULL;
signed char var_6 = (signed char)-4;
unsigned long long int var_8 = 13427943236503672129ULL;
unsigned char var_9 = (unsigned char)157;
int zero = 0;
unsigned short var_12 = (unsigned short)44715;
unsigned short var_13 = (unsigned short)36426;
unsigned int var_14 = 3559470514U;
unsigned long long int var_15 = 97506852312697478ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
