#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 15653919873138890406ULL;
short var_10 = (short)-26263;
unsigned long long int var_15 = 17659372340552748878ULL;
short var_17 = (short)-25874;
int zero = 0;
unsigned int var_18 = 1876958119U;
unsigned short var_19 = (unsigned short)52929;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
