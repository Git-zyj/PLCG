#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)118;
int var_1 = -535857260;
int var_5 = 1020570514;
unsigned long long int var_6 = 9713821158538211398ULL;
_Bool var_7 = (_Bool)1;
int var_8 = -204077197;
int var_11 = -1386116732;
short var_13 = (short)30645;
int zero = 0;
int var_14 = 666714915;
int var_15 = 1902717853;
int var_16 = 732995901;
int var_17 = -1482038698;
void init() {
}

void checksum() {
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
