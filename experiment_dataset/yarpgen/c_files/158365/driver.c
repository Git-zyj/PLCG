#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)2935;
int var_10 = 1349580142;
signed char var_18 = (signed char)-37;
int zero = 0;
unsigned long long int var_19 = 1797059675348279275ULL;
int var_20 = 399518138;
unsigned char var_21 = (unsigned char)23;
unsigned int var_22 = 1174321111U;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
