#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-24321;
long long int var_3 = -5653827113873090590LL;
signed char var_4 = (signed char)98;
int var_5 = -2143578677;
unsigned char var_12 = (unsigned char)206;
unsigned short var_13 = (unsigned short)28957;
int zero = 0;
unsigned int var_14 = 161614619U;
long long int var_15 = -3370496875216496750LL;
unsigned long long int var_16 = 5988659582571308837ULL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
