#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 12051408699492719690ULL;
unsigned short var_3 = (unsigned short)4655;
unsigned char var_4 = (unsigned char)203;
unsigned int var_6 = 446996241U;
short var_7 = (short)-28508;
unsigned char var_8 = (unsigned char)5;
int zero = 0;
unsigned int var_10 = 2620131451U;
unsigned short var_11 = (unsigned short)8926;
long long int var_12 = 8724067475429396428LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
