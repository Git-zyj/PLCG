#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 2484799675668584462ULL;
unsigned char var_6 = (unsigned char)52;
unsigned char var_8 = (unsigned char)72;
unsigned char var_11 = (unsigned char)180;
int zero = 0;
unsigned char var_19 = (unsigned char)113;
unsigned char var_20 = (unsigned char)44;
unsigned char var_21 = (unsigned char)204;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
