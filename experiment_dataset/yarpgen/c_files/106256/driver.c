#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -4436972580939826444LL;
unsigned long long int var_6 = 5956687376204267012ULL;
unsigned char var_10 = (unsigned char)242;
unsigned long long int var_13 = 4129917715323968876ULL;
int zero = 0;
unsigned long long int var_20 = 12286867235463779704ULL;
unsigned char var_21 = (unsigned char)12;
unsigned long long int var_22 = 13794863734630364179ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
