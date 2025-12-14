#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1376964536;
long long int var_5 = -3071055127042433828LL;
unsigned char var_9 = (unsigned char)129;
long long int var_10 = -2286002519512522968LL;
int var_11 = 1748687116;
unsigned short var_12 = (unsigned short)8773;
int zero = 0;
signed char var_13 = (signed char)-61;
unsigned char var_14 = (unsigned char)57;
void init() {
}

void checksum() {
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
