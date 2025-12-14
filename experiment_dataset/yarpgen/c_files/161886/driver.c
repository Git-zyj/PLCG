#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_5 = 9151836718298972114LL;
unsigned long long int var_7 = 10572636443527829707ULL;
signed char var_8 = (signed char)-63;
int zero = 0;
long long int var_12 = 1283953545667288541LL;
long long int var_13 = -5086843788950688634LL;
signed char var_14 = (signed char)-61;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
