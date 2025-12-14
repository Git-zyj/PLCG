#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 16628684179654061354ULL;
long long int var_3 = 8051844237102812087LL;
long long int var_6 = 2947351369188633510LL;
long long int var_8 = -1145275904018301025LL;
long long int var_9 = -57841143222911956LL;
signed char var_10 = (signed char)19;
int zero = 0;
unsigned long long int var_14 = 14993376654525564040ULL;
short var_15 = (short)-7648;
void init() {
}

void checksum() {
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
