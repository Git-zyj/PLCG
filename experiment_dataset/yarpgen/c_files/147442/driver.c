#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned char var_4 = (unsigned char)211;
unsigned int var_7 = 1153920095U;
short var_11 = (short)-17702;
int zero = 0;
signed char var_12 = (signed char)-90;
short var_13 = (short)10177;
unsigned long long int var_14 = 486654329905280481ULL;
short var_15 = (short)-12626;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
