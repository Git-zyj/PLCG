#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)53;
signed char var_3 = (signed char)-29;
signed char var_6 = (signed char)-114;
int zero = 0;
unsigned char var_11 = (unsigned char)224;
unsigned char var_12 = (unsigned char)81;
int var_13 = -1740026891;
void init() {
}

void checksum() {
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
