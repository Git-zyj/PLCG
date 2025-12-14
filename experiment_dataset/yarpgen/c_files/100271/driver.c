#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 550498741U;
unsigned int var_1 = 2599877875U;
signed char var_4 = (signed char)34;
signed char var_5 = (signed char)-79;
int var_7 = -2039468699;
signed char var_8 = (signed char)-88;
signed char var_10 = (signed char)-28;
signed char var_11 = (signed char)-50;
int zero = 0;
unsigned long long int var_12 = 7734629188998013752ULL;
int var_13 = 1904896187;
int var_14 = -1193359417;
unsigned long long int var_15 = 2074562354807929601ULL;
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
