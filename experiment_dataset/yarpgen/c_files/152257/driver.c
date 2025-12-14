#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -8109088954912639988LL;
unsigned char var_3 = (unsigned char)208;
unsigned int var_5 = 3471012376U;
unsigned long long int var_8 = 10859637495482468300ULL;
unsigned short var_9 = (unsigned short)35450;
int zero = 0;
unsigned long long int var_10 = 3429378181008853925ULL;
unsigned short var_11 = (unsigned short)49566;
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
