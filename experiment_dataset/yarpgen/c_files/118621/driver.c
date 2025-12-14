#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-113;
unsigned char var_12 = (unsigned char)191;
short var_13 = (short)1098;
unsigned short var_15 = (unsigned short)40254;
unsigned short var_18 = (unsigned short)61121;
int zero = 0;
int var_20 = 930190197;
unsigned char var_21 = (unsigned char)215;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
