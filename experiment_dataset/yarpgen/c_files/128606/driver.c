#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1438809502;
unsigned long long int var_4 = 11419356156935709481ULL;
long long int var_5 = -4820067409537998283LL;
unsigned char var_7 = (unsigned char)10;
signed char var_8 = (signed char)-41;
int zero = 0;
unsigned short var_11 = (unsigned short)50150;
signed char var_12 = (signed char)-41;
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
