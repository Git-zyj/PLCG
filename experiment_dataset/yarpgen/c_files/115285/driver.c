#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1643292061;
unsigned char var_2 = (unsigned char)65;
unsigned int var_3 = 1869924189U;
short var_7 = (short)1593;
long long int var_8 = 8243772068723010488LL;
int zero = 0;
unsigned short var_10 = (unsigned short)64203;
int var_11 = -2059357040;
unsigned short var_12 = (unsigned short)37098;
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
