#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)2798;
unsigned char var_2 = (unsigned char)21;
unsigned int var_9 = 1158231002U;
int var_10 = -738487555;
unsigned short var_18 = (unsigned short)46463;
int zero = 0;
int var_19 = -1879122811;
unsigned int var_20 = 1375000455U;
signed char var_21 = (signed char)37;
unsigned int var_22 = 1275555284U;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
