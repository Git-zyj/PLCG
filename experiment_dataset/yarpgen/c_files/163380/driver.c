#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)14;
int var_2 = 1029126834;
unsigned int var_3 = 1801877856U;
signed char var_5 = (signed char)12;
unsigned short var_6 = (unsigned short)18676;
int var_7 = 1089784770;
signed char var_9 = (signed char)-53;
long long int var_10 = 6247534768465407097LL;
short var_11 = (short)25733;
short var_12 = (short)20603;
int zero = 0;
long long int var_16 = -1532988003595057929LL;
unsigned int var_17 = 1871479122U;
unsigned long long int var_18 = 3887007289340017664ULL;
unsigned int var_19 = 2212180347U;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
