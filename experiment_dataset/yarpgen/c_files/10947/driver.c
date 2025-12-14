#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -751596634;
unsigned short var_5 = (unsigned short)38893;
signed char var_7 = (signed char)82;
short var_13 = (short)-12175;
int zero = 0;
int var_20 = -262652818;
long long int var_21 = -7365667096087658699LL;
unsigned int var_22 = 2974724976U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
