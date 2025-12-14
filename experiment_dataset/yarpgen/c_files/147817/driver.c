#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)206;
short var_8 = (short)10599;
unsigned int var_9 = 1722864716U;
int zero = 0;
unsigned int var_17 = 1009774639U;
unsigned short var_18 = (unsigned short)61490;
signed char var_19 = (signed char)23;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
