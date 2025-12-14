#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)49;
signed char var_1 = (signed char)54;
signed char var_2 = (signed char)-59;
unsigned char var_3 = (unsigned char)102;
unsigned char var_5 = (unsigned char)23;
unsigned char var_8 = (unsigned char)231;
signed char var_10 = (signed char)111;
int zero = 0;
unsigned char var_12 = (unsigned char)128;
unsigned long long int var_13 = 18076972544983336092ULL;
int var_14 = 1031964115;
signed char var_15 = (signed char)23;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
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
