#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 15699695979402263166ULL;
signed char var_2 = (signed char)-100;
unsigned int var_4 = 486335328U;
long long int var_5 = -1560817635784595295LL;
unsigned char var_6 = (unsigned char)2;
long long int var_8 = 1555676975626094011LL;
unsigned char var_9 = (unsigned char)33;
int var_10 = 656332490;
int zero = 0;
signed char var_11 = (signed char)90;
unsigned int var_12 = 1769747623U;
void init() {
}

void checksum() {
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
