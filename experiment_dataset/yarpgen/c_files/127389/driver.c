#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3117222504U;
unsigned short var_10 = (unsigned short)62431;
int var_17 = -1137757612;
int zero = 0;
unsigned short var_19 = (unsigned short)12493;
unsigned int var_20 = 1905776360U;
int var_21 = -1876238205;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
