#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2343820904U;
short var_2 = (short)-20863;
unsigned short var_7 = (unsigned short)32606;
unsigned long long int var_8 = 7679664254222944338ULL;
short var_10 = (short)1413;
int zero = 0;
unsigned int var_11 = 4201252426U;
unsigned long long int var_12 = 14695867922494962500ULL;
unsigned long long int var_13 = 10358176571492670734ULL;
unsigned int var_14 = 3086665069U;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
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
