#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)66;
signed char var_3 = (signed char)-115;
unsigned char var_4 = (unsigned char)129;
unsigned char var_7 = (unsigned char)31;
int zero = 0;
signed char var_10 = (signed char)12;
signed char var_11 = (signed char)-29;
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
