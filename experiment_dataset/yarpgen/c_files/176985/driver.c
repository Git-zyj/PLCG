#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 284202045U;
int var_2 = 429705642;
unsigned long long int var_3 = 14143964949607893332ULL;
unsigned short var_4 = (unsigned short)10303;
unsigned char var_5 = (unsigned char)26;
unsigned short var_6 = (unsigned short)56744;
int var_9 = 1907248782;
unsigned long long int var_10 = 10869656999287741938ULL;
unsigned int var_12 = 4010995606U;
int zero = 0;
signed char var_13 = (signed char)-23;
unsigned long long int var_14 = 7346995842613588598ULL;
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
