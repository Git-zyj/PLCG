#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3422585141U;
unsigned int var_2 = 2071787963U;
unsigned int var_3 = 2439841147U;
unsigned int var_18 = 3719739799U;
int zero = 0;
signed char var_19 = (signed char)21;
short var_20 = (short)-32214;
unsigned int var_21 = 2775186836U;
unsigned int var_22 = 1812281981U;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
