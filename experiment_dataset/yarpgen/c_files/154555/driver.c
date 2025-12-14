#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_5 = (signed char)-90;
unsigned char var_6 = (unsigned char)152;
unsigned char var_7 = (unsigned char)239;
signed char var_8 = (signed char)28;
short var_9 = (short)-26332;
unsigned char var_10 = (unsigned char)64;
int zero = 0;
long long int var_11 = 477283377204992536LL;
signed char var_12 = (signed char)1;
unsigned short var_13 = (unsigned short)22467;
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
