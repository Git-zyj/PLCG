#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_8 = (unsigned short)40517;
int var_9 = 400830651;
int zero = 0;
unsigned char var_11 = (unsigned char)119;
unsigned short var_12 = (unsigned short)37547;
unsigned char var_13 = (unsigned char)128;
unsigned long long int var_14 = 2939588079928035316ULL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
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
