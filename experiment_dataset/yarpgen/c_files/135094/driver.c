#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 903934301;
unsigned short var_2 = (unsigned short)7884;
unsigned long long int var_5 = 16339075734077161993ULL;
signed char var_7 = (signed char)-62;
int zero = 0;
signed char var_10 = (signed char)-5;
unsigned char var_11 = (unsigned char)210;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
