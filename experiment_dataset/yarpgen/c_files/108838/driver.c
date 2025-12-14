#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_5 = (unsigned char)199;
unsigned char var_7 = (unsigned char)137;
int zero = 0;
unsigned int var_10 = 3253291092U;
unsigned char var_11 = (unsigned char)219;
unsigned int var_12 = 3318534442U;
unsigned short var_13 = (unsigned short)29365;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
