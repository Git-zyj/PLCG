#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-21225;
unsigned int var_1 = 2711487647U;
unsigned int var_2 = 2794526956U;
unsigned int var_4 = 1576438594U;
int var_5 = 993527156;
long long int var_8 = 7629763010197595490LL;
unsigned int var_9 = 3037109499U;
int zero = 0;
signed char var_10 = (signed char)-35;
signed char var_11 = (signed char)-102;
signed char var_12 = (signed char)77;
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
