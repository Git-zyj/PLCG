#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)12699;
long long int var_7 = 7215162599234825148LL;
signed char var_8 = (signed char)117;
signed char var_16 = (signed char)-108;
int zero = 0;
long long int var_19 = -158577963378797326LL;
short var_20 = (short)-4604;
unsigned long long int var_21 = 171990065035493479ULL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
