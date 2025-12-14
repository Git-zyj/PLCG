#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-739;
unsigned short var_4 = (unsigned short)40337;
unsigned int var_6 = 3842004437U;
short var_8 = (short)21974;
long long int var_9 = -8614587585493899213LL;
int zero = 0;
long long int var_10 = -2849195435946247634LL;
signed char var_11 = (signed char)45;
unsigned int var_12 = 1100755747U;
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
