#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 6366190456383431790ULL;
long long int var_4 = -6636104755590733444LL;
unsigned long long int var_6 = 13295019884889731742ULL;
short var_9 = (short)24157;
_Bool var_11 = (_Bool)1;
unsigned int var_12 = 1936906715U;
unsigned short var_15 = (unsigned short)38099;
int zero = 0;
unsigned int var_19 = 3609757198U;
unsigned char var_20 = (unsigned char)253;
unsigned long long int var_21 = 3461741131129963894ULL;
signed char var_22 = (signed char)-29;
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
