#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)71;
signed char var_2 = (signed char)-28;
unsigned char var_4 = (unsigned char)14;
unsigned int var_5 = 486623595U;
unsigned int var_7 = 2692451228U;
unsigned int var_8 = 325462497U;
int zero = 0;
unsigned char var_10 = (unsigned char)3;
unsigned short var_11 = (unsigned short)13612;
int var_12 = -847594096;
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
