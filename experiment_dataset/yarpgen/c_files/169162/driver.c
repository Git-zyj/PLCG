#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)43265;
unsigned char var_11 = (unsigned char)107;
unsigned long long int var_12 = 17176047816882771588ULL;
unsigned short var_14 = (unsigned short)62888;
unsigned char var_18 = (unsigned char)179;
int zero = 0;
int var_19 = -1467675413;
unsigned int var_20 = 796181577U;
unsigned char var_21 = (unsigned char)50;
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
