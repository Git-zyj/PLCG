#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)46;
unsigned int var_9 = 2403800102U;
signed char var_14 = (signed char)-12;
unsigned long long int var_16 = 2320198576122679435ULL;
unsigned char var_18 = (unsigned char)29;
int zero = 0;
signed char var_19 = (signed char)84;
unsigned char var_20 = (unsigned char)35;
long long int var_21 = -7311106381636603758LL;
unsigned short var_22 = (unsigned short)16040;
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
