#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2798717087U;
unsigned char var_1 = (unsigned char)160;
long long int var_2 = -564696616735234508LL;
short var_3 = (short)-18227;
signed char var_4 = (signed char)-87;
unsigned int var_5 = 3852629409U;
unsigned int var_8 = 3062187938U;
unsigned int var_9 = 4285340229U;
int zero = 0;
unsigned int var_12 = 2894261875U;
unsigned long long int var_13 = 1460764781154634012ULL;
signed char var_14 = (signed char)-103;
short var_15 = (short)-10114;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
