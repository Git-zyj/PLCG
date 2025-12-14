#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -2974296903726386348LL;
unsigned char var_2 = (unsigned char)146;
signed char var_3 = (signed char)-90;
unsigned int var_4 = 1534527639U;
unsigned long long int var_7 = 7725242187263926063ULL;
int zero = 0;
int var_12 = 119449434;
short var_13 = (short)5016;
void init() {
}

void checksum() {
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
