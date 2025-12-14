#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 4967184448093473298ULL;
signed char var_1 = (signed char)-27;
unsigned long long int var_3 = 10301408546794147275ULL;
signed char var_8 = (signed char)-89;
unsigned short var_10 = (unsigned short)56794;
signed char var_11 = (signed char)36;
unsigned short var_12 = (unsigned short)60978;
unsigned char var_13 = (unsigned char)11;
unsigned long long int var_16 = 9691391124021113585ULL;
signed char var_17 = (signed char)8;
int zero = 0;
unsigned long long int var_18 = 8928256650694535886ULL;
unsigned short var_19 = (unsigned short)3444;
unsigned char var_20 = (unsigned char)209;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
