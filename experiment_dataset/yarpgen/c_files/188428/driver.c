#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_5 = 154796613U;
unsigned short var_6 = (unsigned short)56638;
unsigned long long int var_7 = 11551033577738788739ULL;
unsigned int var_8 = 2442841901U;
_Bool var_9 = (_Bool)0;
signed char var_10 = (signed char)7;
unsigned char var_11 = (unsigned char)196;
unsigned char var_13 = (unsigned char)164;
unsigned char var_16 = (unsigned char)168;
int zero = 0;
int var_19 = 1003939938;
unsigned int var_20 = 1660318521U;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
