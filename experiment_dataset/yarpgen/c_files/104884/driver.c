#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)18367;
unsigned long long int var_3 = 2462316554780383265ULL;
unsigned long long int var_4 = 17315145826014103398ULL;
unsigned int var_7 = 1507820014U;
long long int var_9 = 245096217928053903LL;
signed char var_10 = (signed char)85;
short var_11 = (short)-22049;
_Bool var_12 = (_Bool)1;
int zero = 0;
unsigned int var_13 = 2681365551U;
short var_14 = (short)-24651;
void init() {
}

void checksum() {
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
