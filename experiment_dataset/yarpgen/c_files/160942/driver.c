#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)17590;
unsigned int var_3 = 31001978U;
int var_6 = -1233787789;
unsigned int var_9 = 2790328157U;
_Bool var_12 = (_Bool)0;
unsigned long long int var_14 = 12843625276308644328ULL;
unsigned char var_16 = (unsigned char)235;
int zero = 0;
int var_19 = -1384098411;
short var_20 = (short)-18147;
unsigned long long int var_21 = 17952861333260073832ULL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
