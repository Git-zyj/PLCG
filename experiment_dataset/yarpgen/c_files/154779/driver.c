#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)58464;
unsigned int var_2 = 3568285757U;
int var_5 = -569961493;
int var_6 = -358575757;
signed char var_7 = (signed char)86;
unsigned long long int var_9 = 16686735155020592689ULL;
long long int var_10 = 274592063670258549LL;
int zero = 0;
unsigned int var_11 = 3017687724U;
short var_12 = (short)-18207;
long long int var_13 = -988597357169454854LL;
void init() {
}

void checksum() {
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
