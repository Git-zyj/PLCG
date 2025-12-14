#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)9694;
int var_1 = 1569659852;
int var_2 = -1570299158;
unsigned int var_4 = 2019830484U;
long long int var_10 = 3967127986051116949LL;
int zero = 0;
signed char var_11 = (signed char)89;
unsigned int var_12 = 255144805U;
int var_13 = -457564880;
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
