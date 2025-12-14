#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)194;
int var_1 = 1520700818;
long long int var_4 = -3904171233198242317LL;
signed char var_7 = (signed char)48;
int var_13 = -1183087135;
int zero = 0;
unsigned char var_16 = (unsigned char)161;
signed char var_17 = (signed char)-88;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
