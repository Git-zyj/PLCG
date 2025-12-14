#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -740784601829129999LL;
signed char var_3 = (signed char)-118;
unsigned long long int var_4 = 14029114115062317487ULL;
unsigned short var_6 = (unsigned short)14310;
unsigned long long int var_7 = 9374138830558941320ULL;
int zero = 0;
unsigned short var_15 = (unsigned short)46125;
short var_16 = (short)-10230;
unsigned long long int var_17 = 5634272094952926029ULL;
void init() {
}

void checksum() {
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
