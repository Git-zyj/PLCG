#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 888916047U;
signed char var_1 = (signed char)-10;
int var_2 = -457825715;
unsigned long long int var_3 = 12767335320787524903ULL;
signed char var_4 = (signed char)-9;
unsigned char var_5 = (unsigned char)230;
unsigned short var_8 = (unsigned short)59810;
unsigned char var_9 = (unsigned char)32;
int zero = 0;
unsigned char var_10 = (unsigned char)74;
_Bool var_11 = (_Bool)1;
unsigned int var_12 = 1365638954U;
long long int var_13 = 2157005134541316022LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
