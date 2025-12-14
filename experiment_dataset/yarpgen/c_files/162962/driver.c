#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_5 = 3872610473U;
unsigned long long int var_6 = 3422784991934664964ULL;
short var_15 = (short)29849;
long long int var_16 = -5617730251184074397LL;
int zero = 0;
unsigned short var_19 = (unsigned short)54773;
unsigned int var_20 = 79849923U;
signed char var_21 = (signed char)12;
signed char var_22 = (signed char)-55;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
