#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1086344U;
unsigned long long int var_6 = 7074031792413061850ULL;
unsigned short var_10 = (unsigned short)11374;
unsigned short var_11 = (unsigned short)59917;
unsigned short var_13 = (unsigned short)7852;
unsigned short var_17 = (unsigned short)50601;
unsigned int var_18 = 3484216727U;
int zero = 0;
signed char var_19 = (signed char)66;
int var_20 = -1860438297;
signed char var_21 = (signed char)-63;
int var_22 = 13286778;
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
