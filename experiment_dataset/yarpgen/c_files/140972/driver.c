#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-24104;
short var_3 = (short)-18439;
long long int var_7 = -7251743220968849229LL;
unsigned short var_8 = (unsigned short)64453;
int var_10 = -680178343;
int zero = 0;
unsigned short var_12 = (unsigned short)12862;
int var_13 = 439331796;
unsigned int var_14 = 723686314U;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
