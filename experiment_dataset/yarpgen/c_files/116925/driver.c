#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)30042;
long long int var_3 = 3488404273356695582LL;
int var_7 = -1529601769;
signed char var_8 = (signed char)-8;
unsigned short var_10 = (unsigned short)24892;
int var_12 = -479476187;
int zero = 0;
unsigned short var_13 = (unsigned short)54666;
signed char var_14 = (signed char)18;
unsigned long long int var_15 = 14236766887658246921ULL;
unsigned short var_16 = (unsigned short)43979;
unsigned long long int var_17 = 2345176510932293833ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
