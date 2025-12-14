#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)24362;
unsigned short var_2 = (unsigned short)31090;
signed char var_3 = (signed char)-42;
unsigned char var_4 = (unsigned char)36;
long long int var_5 = -4269937841955830605LL;
unsigned char var_9 = (unsigned char)235;
unsigned short var_11 = (unsigned short)31161;
unsigned short var_14 = (unsigned short)50082;
unsigned char var_15 = (unsigned char)92;
int zero = 0;
short var_19 = (short)-28544;
unsigned short var_20 = (unsigned short)43381;
void init() {
}

void checksum() {
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
