#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
short var_1 = (short)5594;
long long int var_2 = 3691970598811915487LL;
unsigned int var_3 = 4177686971U;
unsigned short var_4 = (unsigned short)25106;
int var_8 = -1826905461;
long long int var_10 = -6763214776777386858LL;
unsigned short var_12 = (unsigned short)60676;
int zero = 0;
signed char var_13 = (signed char)-126;
unsigned char var_14 = (unsigned char)251;
void init() {
}

void checksum() {
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
