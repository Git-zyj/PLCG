#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)159;
signed char var_4 = (signed char)-111;
unsigned int var_5 = 2323277677U;
unsigned short var_15 = (unsigned short)58916;
int zero = 0;
unsigned int var_18 = 3514656054U;
unsigned long long int var_19 = 3876503364354064033ULL;
void init() {
}

void checksum() {
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
