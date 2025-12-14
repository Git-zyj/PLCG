#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 16248235596180021948ULL;
unsigned short var_2 = (unsigned short)56284;
short var_4 = (short)14642;
unsigned int var_12 = 3474547153U;
unsigned int var_13 = 1197810751U;
signed char var_14 = (signed char)49;
int zero = 0;
unsigned int var_19 = 1922935506U;
unsigned int var_20 = 4181591115U;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
