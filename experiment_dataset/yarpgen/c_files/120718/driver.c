#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)244;
unsigned char var_1 = (unsigned char)192;
unsigned short var_5 = (unsigned short)32719;
long long int var_7 = 2278172875760311394LL;
unsigned char var_8 = (unsigned char)161;
int zero = 0;
unsigned int var_11 = 2935965057U;
int var_12 = -1489878802;
signed char var_13 = (signed char)-123;
unsigned int var_14 = 1433973115U;
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
