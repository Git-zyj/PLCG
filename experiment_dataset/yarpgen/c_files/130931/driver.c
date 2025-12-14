#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)11547;
int var_3 = 641631206;
int var_4 = 1674964780;
short var_8 = (short)-8614;
int zero = 0;
long long int var_11 = 7927189576179975727LL;
unsigned char var_12 = (unsigned char)139;
void init() {
}

void checksum() {
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
