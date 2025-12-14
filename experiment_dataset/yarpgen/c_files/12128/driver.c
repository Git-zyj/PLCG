#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_5 = -3992135380243207788LL;
int var_10 = 1695082564;
int zero = 0;
long long int var_11 = -1364748202157205081LL;
long long int var_12 = 8674824853666954655LL;
signed char var_13 = (signed char)-32;
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
