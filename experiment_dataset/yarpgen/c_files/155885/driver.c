#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)207;
signed char var_2 = (signed char)107;
unsigned long long int var_8 = 26295866969276340ULL;
int zero = 0;
unsigned long long int var_17 = 12306431571188249058ULL;
unsigned int var_18 = 2567184491U;
unsigned long long int var_19 = 4345378333737683841ULL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
