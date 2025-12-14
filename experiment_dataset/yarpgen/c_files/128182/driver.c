#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1978887655;
long long int var_2 = -4044386599675611948LL;
unsigned char var_4 = (unsigned char)60;
int var_7 = 892125626;
int zero = 0;
short var_10 = (short)12925;
signed char var_11 = (signed char)-123;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
