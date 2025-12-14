#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -3264063808670632139LL;
unsigned short var_6 = (unsigned short)4825;
unsigned char var_7 = (unsigned char)158;
signed char var_8 = (signed char)-13;
unsigned short var_9 = (unsigned short)36139;
unsigned short var_10 = (unsigned short)27689;
int zero = 0;
unsigned char var_11 = (unsigned char)195;
unsigned long long int var_12 = 17638731636235617117ULL;
int var_13 = -76074134;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
