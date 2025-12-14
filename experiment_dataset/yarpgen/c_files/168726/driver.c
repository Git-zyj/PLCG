#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 7284539981312481402LL;
unsigned long long int var_8 = 9532106866706285816ULL;
unsigned char var_11 = (unsigned char)194;
unsigned int var_13 = 547190420U;
int zero = 0;
unsigned short var_14 = (unsigned short)31119;
signed char var_15 = (signed char)-55;
short var_16 = (short)12423;
int var_17 = 103785180;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
