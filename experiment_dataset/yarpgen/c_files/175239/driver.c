#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1917594611;
long long int var_2 = -2027663391502071377LL;
unsigned int var_3 = 3003338427U;
unsigned int var_4 = 2096346039U;
int zero = 0;
unsigned char var_12 = (unsigned char)29;
short var_13 = (short)3142;
void init() {
}

void checksum() {
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
