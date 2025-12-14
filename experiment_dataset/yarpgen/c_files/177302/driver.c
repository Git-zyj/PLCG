#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3069759737U;
_Bool var_3 = (_Bool)1;
_Bool var_4 = (_Bool)0;
unsigned long long int var_5 = 16885376932131464192ULL;
unsigned int var_6 = 535719928U;
unsigned int var_9 = 2398618049U;
unsigned long long int var_10 = 1904012225572879401ULL;
unsigned int var_11 = 4109772438U;
unsigned long long int var_13 = 6781370935094097375ULL;
int zero = 0;
unsigned char var_14 = (unsigned char)81;
short var_15 = (short)25972;
unsigned int var_16 = 1183161462U;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
