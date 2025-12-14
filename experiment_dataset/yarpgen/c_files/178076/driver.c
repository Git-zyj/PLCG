#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 11387341003241488578ULL;
_Bool var_8 = (_Bool)0;
int var_11 = 81383729;
unsigned short var_12 = (unsigned short)58889;
int zero = 0;
signed char var_19 = (signed char)-65;
unsigned char var_20 = (unsigned char)30;
unsigned long long int var_21 = 1098414661478450816ULL;
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
