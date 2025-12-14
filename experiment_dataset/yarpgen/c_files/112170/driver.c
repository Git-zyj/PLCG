#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = 2056816499062364742LL;
signed char var_8 = (signed char)-32;
unsigned int var_9 = 4081906051U;
unsigned short var_14 = (unsigned short)36158;
int zero = 0;
unsigned char var_19 = (unsigned char)162;
signed char var_20 = (signed char)-17;
int var_21 = -207791754;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
