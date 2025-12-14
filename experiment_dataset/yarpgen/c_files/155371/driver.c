#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -6036061345139656007LL;
short var_2 = (short)30399;
unsigned char var_3 = (unsigned char)109;
unsigned int var_6 = 3052270273U;
signed char var_8 = (signed char)29;
signed char var_12 = (signed char)42;
int zero = 0;
signed char var_13 = (signed char)48;
unsigned int var_14 = 2520814829U;
unsigned short var_15 = (unsigned short)48584;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
