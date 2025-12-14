#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 90868044765240015LL;
signed char var_3 = (signed char)-3;
long long int var_4 = -5656368850624181310LL;
unsigned char var_6 = (unsigned char)195;
signed char var_9 = (signed char)-127;
unsigned int var_10 = 3312299254U;
int zero = 0;
int var_13 = 2043678974;
signed char var_14 = (signed char)41;
unsigned short var_15 = (unsigned short)23926;
signed char var_16 = (signed char)33;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
