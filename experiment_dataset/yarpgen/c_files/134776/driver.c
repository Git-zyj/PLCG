#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 17056703920649909002ULL;
unsigned long long int var_2 = 9524852947475776567ULL;
unsigned char var_5 = (unsigned char)28;
unsigned char var_7 = (unsigned char)134;
unsigned char var_11 = (unsigned char)82;
unsigned char var_16 = (unsigned char)216;
int zero = 0;
int var_18 = 1105230035;
unsigned char var_19 = (unsigned char)56;
long long int var_20 = 9107172905993212973LL;
unsigned long long int var_21 = 15632311259241406245ULL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
