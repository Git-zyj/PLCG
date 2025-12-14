#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -6388432328754584409LL;
long long int var_4 = 6602829933720143703LL;
short var_9 = (short)30471;
long long int var_12 = -624717213118593272LL;
unsigned short var_15 = (unsigned short)64534;
int zero = 0;
unsigned short var_19 = (unsigned short)62532;
signed char var_20 = (signed char)42;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
