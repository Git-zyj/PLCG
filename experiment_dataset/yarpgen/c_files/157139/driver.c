#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 14262306208197734044ULL;
unsigned short var_4 = (unsigned short)55343;
unsigned long long int var_8 = 8083438847926624126ULL;
signed char var_10 = (signed char)-22;
unsigned int var_11 = 3415419696U;
int zero = 0;
unsigned char var_13 = (unsigned char)5;
signed char var_14 = (signed char)-76;
void init() {
}

void checksum() {
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
