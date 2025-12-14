#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 526855297;
signed char var_1 = (signed char)-72;
signed char var_2 = (signed char)-6;
unsigned char var_4 = (unsigned char)115;
unsigned char var_6 = (unsigned char)51;
unsigned short var_8 = (unsigned short)57489;
unsigned int var_9 = 2475448128U;
int zero = 0;
long long int var_10 = -4918372036465853364LL;
signed char var_11 = (signed char)24;
unsigned int var_12 = 1812859739U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
