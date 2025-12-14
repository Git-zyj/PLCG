#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 7947853594563214392ULL;
short var_3 = (short)10675;
long long int var_4 = 6061839829372031524LL;
short var_10 = (short)22715;
int zero = 0;
signed char var_11 = (signed char)40;
unsigned char var_12 = (unsigned char)75;
unsigned long long int var_13 = 12167347971358792304ULL;
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
