#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -4462620253329327175LL;
unsigned char var_2 = (unsigned char)237;
_Bool var_6 = (_Bool)1;
unsigned int var_7 = 4146007956U;
unsigned long long int var_13 = 15121035899434483243ULL;
long long int var_14 = 8624158698226023027LL;
unsigned long long int var_16 = 5056815839358181957ULL;
unsigned int var_17 = 2879624627U;
int zero = 0;
unsigned short var_20 = (unsigned short)14270;
unsigned char var_21 = (unsigned char)115;
signed char var_22 = (signed char)121;
unsigned int var_23 = 783223574U;
unsigned long long int var_24 = 8575395879632565113ULL;
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
