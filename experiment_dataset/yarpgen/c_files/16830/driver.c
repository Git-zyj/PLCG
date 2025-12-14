#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-19352;
unsigned char var_6 = (unsigned char)165;
unsigned int var_7 = 4129542597U;
unsigned char var_9 = (unsigned char)161;
int zero = 0;
int var_13 = 1584224032;
short var_14 = (short)2514;
unsigned char var_15 = (unsigned char)13;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
