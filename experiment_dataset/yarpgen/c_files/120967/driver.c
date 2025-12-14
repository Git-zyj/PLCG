#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-24711;
signed char var_13 = (signed char)-37;
unsigned int var_16 = 1699216653U;
unsigned short var_17 = (unsigned short)44771;
unsigned char var_19 = (unsigned char)181;
int zero = 0;
signed char var_20 = (signed char)-68;
signed char var_21 = (signed char)-99;
unsigned int var_22 = 911718481U;
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
