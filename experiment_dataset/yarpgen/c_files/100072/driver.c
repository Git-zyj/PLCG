#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 1605593901;
int var_4 = -1668154170;
unsigned int var_5 = 1632177457U;
int var_7 = -671945418;
int var_12 = 516631487;
short var_13 = (short)4618;
int zero = 0;
signed char var_14 = (signed char)118;
unsigned char var_15 = (unsigned char)182;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
