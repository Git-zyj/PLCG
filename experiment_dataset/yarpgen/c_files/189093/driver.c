#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)18605;
long long int var_2 = 3369954562086201502LL;
unsigned long long int var_9 = 9840379839443083986ULL;
int zero = 0;
unsigned int var_10 = 3576658354U;
short var_11 = (short)28550;
unsigned int var_12 = 2569137777U;
short var_13 = (short)-24702;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
