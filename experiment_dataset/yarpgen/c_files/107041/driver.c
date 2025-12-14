#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_6 = 876469794U;
unsigned short var_11 = (unsigned short)20635;
unsigned long long int var_12 = 2478403461647464849ULL;
unsigned int var_14 = 3315182381U;
unsigned short var_17 = (unsigned short)65228;
int zero = 0;
unsigned char var_20 = (unsigned char)255;
unsigned int var_21 = 3706784798U;
void init() {
}

void checksum() {
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
