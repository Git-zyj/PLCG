#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 624727212U;
long long int var_4 = 8754283365450867455LL;
unsigned char var_5 = (unsigned char)107;
long long int var_7 = -3399224514523166725LL;
unsigned char var_9 = (unsigned char)172;
unsigned char var_12 = (unsigned char)43;
int zero = 0;
unsigned int var_15 = 1040681418U;
unsigned char var_16 = (unsigned char)224;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
