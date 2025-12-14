#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -8792370135531037030LL;
signed char var_4 = (signed char)-103;
unsigned short var_6 = (unsigned short)46611;
unsigned int var_12 = 1034036180U;
int var_17 = -1728046882;
int zero = 0;
signed char var_19 = (signed char)-53;
_Bool var_20 = (_Bool)0;
short var_21 = (short)8978;
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
