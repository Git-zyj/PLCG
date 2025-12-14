#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)50892;
long long int var_6 = 6110024033840267166LL;
unsigned char var_9 = (unsigned char)237;
unsigned char var_10 = (unsigned char)34;
int zero = 0;
_Bool var_11 = (_Bool)1;
short var_12 = (short)28221;
long long int var_13 = 1570438338530902723LL;
_Bool var_14 = (_Bool)0;
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
