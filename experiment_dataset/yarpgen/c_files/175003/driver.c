#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)58655;
unsigned int var_1 = 959066900U;
signed char var_4 = (signed char)19;
signed char var_7 = (signed char)-115;
long long int var_8 = 3148760597413419166LL;
int var_10 = -7741923;
int zero = 0;
int var_12 = -506923599;
long long int var_13 = -2998027581313704541LL;
unsigned short var_14 = (unsigned short)18783;
void init() {
}

void checksum() {
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
