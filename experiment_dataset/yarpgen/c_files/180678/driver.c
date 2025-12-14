#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)28879;
unsigned int var_2 = 1594852956U;
unsigned int var_5 = 3675395353U;
unsigned short var_6 = (unsigned short)54145;
int zero = 0;
int var_12 = -1524011926;
signed char var_13 = (signed char)-85;
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
