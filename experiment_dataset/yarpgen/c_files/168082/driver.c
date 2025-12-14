#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_8 = 3391559842U;
unsigned int var_10 = 1287930341U;
long long int var_12 = -1679837593942349925LL;
int zero = 0;
signed char var_14 = (signed char)25;
unsigned short var_15 = (unsigned short)44199;
void init() {
}

void checksum() {
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
