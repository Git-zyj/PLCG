#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)2294;
unsigned char var_1 = (unsigned char)54;
unsigned char var_2 = (unsigned char)76;
int var_12 = -129322177;
int zero = 0;
long long int var_13 = 5348531265047751535LL;
unsigned char var_14 = (unsigned char)65;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
