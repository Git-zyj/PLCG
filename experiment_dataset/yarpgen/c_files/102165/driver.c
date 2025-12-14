#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-24440;
signed char var_9 = (signed char)-100;
unsigned long long int var_12 = 7103098723533715123ULL;
unsigned short var_16 = (unsigned short)4517;
unsigned int var_17 = 1189088688U;
int zero = 0;
short var_18 = (short)6808;
long long int var_19 = 7638546550106126221LL;
unsigned short var_20 = (unsigned short)41830;
signed char var_21 = (signed char)23;
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
