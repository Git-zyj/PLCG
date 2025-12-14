#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)209;
unsigned char var_3 = (unsigned char)201;
signed char var_4 = (signed char)-41;
unsigned char var_5 = (unsigned char)250;
unsigned char var_6 = (unsigned char)197;
unsigned char var_7 = (unsigned char)21;
unsigned char var_9 = (unsigned char)117;
int zero = 0;
unsigned char var_11 = (unsigned char)196;
signed char var_12 = (signed char)102;
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
