#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)25573;
short var_2 = (short)31368;
signed char var_5 = (signed char)2;
int var_7 = -799667049;
short var_10 = (short)-669;
unsigned int var_14 = 3672070444U;
int zero = 0;
long long int var_19 = -3549889725174298850LL;
unsigned char var_20 = (unsigned char)38;
signed char var_21 = (signed char)-35;
signed char var_22 = (signed char)124;
unsigned long long int var_23 = 9957959546434908154ULL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
