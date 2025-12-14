#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2821438562U;
unsigned short var_7 = (unsigned short)21288;
unsigned short var_8 = (unsigned short)20348;
unsigned int var_10 = 124347076U;
unsigned int var_11 = 1873784266U;
unsigned int var_13 = 2814957687U;
unsigned short var_14 = (unsigned short)13125;
int zero = 0;
unsigned int var_17 = 781411011U;
unsigned int var_18 = 2428358764U;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
