#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)43;
short var_1 = (short)-24037;
unsigned long long int var_3 = 3746723690798240760ULL;
unsigned int var_11 = 2480219063U;
int zero = 0;
signed char var_12 = (signed char)80;
unsigned char var_13 = (unsigned char)64;
unsigned int var_14 = 778107365U;
short var_15 = (short)-28513;
signed char var_16 = (signed char)-71;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
