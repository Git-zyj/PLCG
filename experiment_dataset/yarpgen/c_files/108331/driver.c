#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 1130316936131178053ULL;
unsigned char var_6 = (unsigned char)115;
short var_8 = (short)1892;
unsigned char var_11 = (unsigned char)57;
unsigned char var_12 = (unsigned char)154;
int zero = 0;
long long int var_13 = -2752890645933982319LL;
signed char var_14 = (signed char)-99;
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
