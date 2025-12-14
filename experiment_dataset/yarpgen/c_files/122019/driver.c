#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 3678499247248484736ULL;
unsigned long long int var_4 = 6562021109263923544ULL;
unsigned short var_5 = (unsigned short)33520;
signed char var_8 = (signed char)-122;
int var_11 = -1066847845;
long long int var_14 = -1527762064880970891LL;
long long int var_15 = -8973410269332705379LL;
int zero = 0;
int var_20 = -2072480941;
unsigned char var_21 = (unsigned char)171;
unsigned char var_22 = (unsigned char)89;
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
