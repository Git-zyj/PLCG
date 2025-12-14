#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_8 = -4769829984218898456LL;
unsigned short var_9 = (unsigned short)13608;
unsigned char var_13 = (unsigned char)164;
unsigned short var_19 = (unsigned short)29266;
int zero = 0;
unsigned short var_20 = (unsigned short)7002;
unsigned int var_21 = 1179148085U;
unsigned short var_22 = (unsigned short)29640;
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
