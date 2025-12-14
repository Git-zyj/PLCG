#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 8881574644296266033ULL;
unsigned int var_7 = 204150886U;
int var_9 = -85483463;
signed char var_10 = (signed char)-63;
long long int var_11 = 8712541435689394147LL;
long long int var_16 = -6719987377237584028LL;
int var_18 = -769471668;
int zero = 0;
signed char var_20 = (signed char)-57;
unsigned int var_21 = 1159600483U;
short var_22 = (short)5772;
unsigned char var_23 = (unsigned char)181;
int var_24 = -446111747;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
