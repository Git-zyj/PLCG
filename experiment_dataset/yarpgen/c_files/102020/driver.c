#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 8727470017673565793ULL;
unsigned char var_5 = (unsigned char)74;
int var_7 = -612894442;
signed char var_10 = (signed char)90;
int zero = 0;
short var_12 = (short)13675;
long long int var_13 = -6456732890036440105LL;
void init() {
}

void checksum() {
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
