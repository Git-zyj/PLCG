#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)251;
int var_10 = -1969089437;
unsigned char var_12 = (unsigned char)206;
unsigned char var_17 = (unsigned char)56;
int zero = 0;
unsigned long long int var_20 = 16227880987234451266ULL;
short var_21 = (short)-11179;
short var_22 = (short)26429;
short var_23 = (short)-3685;
long long int var_24 = 366628263009411621LL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
