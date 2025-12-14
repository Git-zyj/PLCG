#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 10659142218006557321ULL;
long long int var_5 = -7323219586956252295LL;
long long int var_6 = -3460354135267581194LL;
int zero = 0;
long long int var_18 = 1961026623458742831LL;
unsigned short var_19 = (unsigned short)30526;
short var_20 = (short)-8694;
unsigned long long int var_21 = 17453389798705689300ULL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
