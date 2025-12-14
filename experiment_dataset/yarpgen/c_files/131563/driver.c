#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 785051915U;
int var_2 = 131590237;
signed char var_3 = (signed char)19;
unsigned long long int var_5 = 1045111905109474231ULL;
signed char var_8 = (signed char)34;
int var_9 = -2089716582;
int zero = 0;
unsigned long long int var_10 = 1963711783869973656ULL;
long long int var_11 = -144250360374738925LL;
unsigned short var_12 = (unsigned short)61552;
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
