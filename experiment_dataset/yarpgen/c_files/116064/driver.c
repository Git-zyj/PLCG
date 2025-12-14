#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)35;
short var_4 = (short)-2663;
unsigned int var_5 = 281467349U;
unsigned long long int var_7 = 7655928381622033577ULL;
signed char var_9 = (signed char)31;
long long int var_10 = -6381401601913190509LL;
int zero = 0;
signed char var_11 = (signed char)-75;
unsigned short var_12 = (unsigned short)42992;
short var_13 = (short)13887;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
