#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_6 = (unsigned short)7969;
signed char var_9 = (signed char)-89;
unsigned long long int var_14 = 3564619210929211662ULL;
unsigned short var_16 = (unsigned short)53588;
int zero = 0;
unsigned short var_19 = (unsigned short)2728;
unsigned short var_20 = (unsigned short)53719;
unsigned short var_21 = (unsigned short)12934;
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
