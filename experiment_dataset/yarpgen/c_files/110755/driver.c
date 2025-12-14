#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)19741;
short var_3 = (short)5464;
unsigned short var_4 = (unsigned short)9423;
unsigned short var_5 = (unsigned short)36120;
short var_6 = (short)-27794;
int zero = 0;
short var_10 = (short)982;
short var_11 = (short)1913;
unsigned short var_12 = (unsigned short)60005;
short var_13 = (short)-9795;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
