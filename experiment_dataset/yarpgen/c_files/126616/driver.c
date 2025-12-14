#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 4550044568946213704ULL;
long long int var_2 = -1177219225909132713LL;
unsigned short var_3 = (unsigned short)33415;
long long int var_5 = 7169977072863336631LL;
_Bool var_6 = (_Bool)1;
unsigned long long int var_7 = 8275872639961804551ULL;
int zero = 0;
unsigned char var_11 = (unsigned char)22;
unsigned short var_12 = (unsigned short)6756;
signed char var_13 = (signed char)-28;
unsigned short var_14 = (unsigned short)21372;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
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
