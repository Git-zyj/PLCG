#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)57177;
signed char var_3 = (signed char)-122;
unsigned char var_12 = (unsigned char)180;
signed char var_13 = (signed char)-21;
unsigned int var_15 = 3317761313U;
int zero = 0;
unsigned short var_18 = (unsigned short)44424;
signed char var_19 = (signed char)-100;
unsigned short var_20 = (unsigned short)42038;
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
