#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)26993;
_Bool var_2 = (_Bool)0;
short var_3 = (short)-27978;
unsigned char var_5 = (unsigned char)125;
short var_9 = (short)-30718;
unsigned short var_11 = (unsigned short)33640;
int zero = 0;
short var_15 = (short)-13515;
_Bool var_16 = (_Bool)1;
short var_17 = (short)3958;
void init() {
}

void checksum() {
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
