#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 4156053505U;
_Bool var_2 = (_Bool)0;
signed char var_3 = (signed char)14;
unsigned int var_5 = 912125274U;
unsigned short var_12 = (unsigned short)49979;
unsigned short var_16 = (unsigned short)12605;
unsigned long long int var_17 = 172566249072398478ULL;
unsigned int var_19 = 288471134U;
int zero = 0;
unsigned short var_20 = (unsigned short)23939;
int var_21 = 1088530731;
unsigned short var_22 = (unsigned short)59509;
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
