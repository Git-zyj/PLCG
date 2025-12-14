#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_5 = (unsigned char)159;
unsigned long long int var_7 = 16243075816452255755ULL;
unsigned short var_15 = (unsigned short)41592;
int zero = 0;
unsigned char var_20 = (unsigned char)113;
unsigned int var_21 = 1085633578U;
unsigned int var_22 = 3555306166U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
