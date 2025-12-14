#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)129;
unsigned char var_1 = (unsigned char)191;
unsigned short var_5 = (unsigned short)47867;
unsigned int var_11 = 3170645342U;
int zero = 0;
long long int var_12 = -7115713836955253587LL;
signed char var_13 = (signed char)-50;
unsigned short var_14 = (unsigned short)40557;
unsigned int var_15 = 40414606U;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
