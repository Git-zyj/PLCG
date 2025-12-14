#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1554883513U;
unsigned long long int var_2 = 10717205254398877970ULL;
long long int var_5 = 4536410453233610104LL;
unsigned long long int var_6 = 2906455265514274306ULL;
int zero = 0;
short var_10 = (short)4858;
unsigned long long int var_11 = 9988982175770848328ULL;
unsigned long long int var_12 = 16110589382809522374ULL;
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
