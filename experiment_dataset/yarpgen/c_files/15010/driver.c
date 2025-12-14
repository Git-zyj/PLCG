#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)16564;
unsigned short var_2 = (unsigned short)57890;
short var_6 = (short)-31130;
unsigned short var_9 = (unsigned short)11739;
unsigned long long int var_11 = 3750974284560284065ULL;
short var_13 = (short)-11451;
short var_14 = (short)15586;
unsigned long long int var_15 = 6630167372474267796ULL;
short var_17 = (short)-29159;
int zero = 0;
short var_18 = (short)28053;
short var_19 = (short)30129;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
