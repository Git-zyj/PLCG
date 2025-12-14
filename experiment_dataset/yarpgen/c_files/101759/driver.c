#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -899985534;
unsigned char var_2 = (unsigned char)172;
unsigned long long int var_3 = 14259353612689048459ULL;
unsigned int var_4 = 1608807215U;
unsigned char var_8 = (unsigned char)143;
unsigned long long int var_9 = 14571962738675587576ULL;
long long int var_10 = 5286887547594444272LL;
unsigned long long int var_11 = 730858213395994555ULL;
unsigned long long int var_12 = 17626333581763573386ULL;
unsigned long long int var_13 = 1307348447664206185ULL;
short var_14 = (short)11764;
int zero = 0;
unsigned long long int var_15 = 2524245759609024376ULL;
signed char var_16 = (signed char)-26;
unsigned int var_17 = 104388534U;
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
