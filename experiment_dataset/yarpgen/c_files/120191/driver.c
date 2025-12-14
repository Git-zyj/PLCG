#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 12417864220136763378ULL;
unsigned long long int var_5 = 1767681034981507568ULL;
short var_7 = (short)20834;
unsigned long long int var_8 = 10992505096512352599ULL;
int zero = 0;
unsigned short var_11 = (unsigned short)21852;
unsigned long long int var_12 = 13567725208593270585ULL;
unsigned int var_13 = 1781291577U;
long long int var_14 = -6420479663984567011LL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
