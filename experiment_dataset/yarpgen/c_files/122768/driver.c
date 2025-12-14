#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 3967371155324138609ULL;
unsigned short var_3 = (unsigned short)35175;
unsigned char var_7 = (unsigned char)186;
signed char var_8 = (signed char)19;
int zero = 0;
unsigned int var_12 = 6461074U;
unsigned long long int var_13 = 8783233561912005810ULL;
void init() {
}

void checksum() {
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
