#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 8927034786408851341LL;
unsigned char var_2 = (unsigned char)95;
signed char var_4 = (signed char)-118;
short var_7 = (short)24727;
int var_9 = -1140560702;
int zero = 0;
unsigned char var_10 = (unsigned char)198;
int var_11 = 2051658516;
short var_12 = (short)12970;
_Bool var_13 = (_Bool)1;
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
