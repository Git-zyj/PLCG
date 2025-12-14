#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 5333862794940225422ULL;
unsigned int var_8 = 1702012353U;
unsigned long long int var_12 = 6319906584435058870ULL;
unsigned char var_13 = (unsigned char)191;
int zero = 0;
unsigned int var_14 = 285827911U;
unsigned char var_15 = (unsigned char)3;
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
