#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)42255;
short var_2 = (short)-8525;
unsigned char var_3 = (unsigned char)57;
int var_5 = 1510325164;
int zero = 0;
unsigned char var_10 = (unsigned char)78;
unsigned long long int var_11 = 8632321985268408464ULL;
unsigned short var_12 = (unsigned short)43622;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
