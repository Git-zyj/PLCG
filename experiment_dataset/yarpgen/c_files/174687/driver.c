#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)3910;
unsigned long long int var_2 = 17112458878999996737ULL;
short var_3 = (short)-31080;
short var_5 = (short)-6980;
signed char var_6 = (signed char)36;
int zero = 0;
unsigned long long int var_10 = 17696023888975890402ULL;
int var_11 = 80393275;
unsigned int var_12 = 2780303198U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
