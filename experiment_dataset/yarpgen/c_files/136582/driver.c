#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 3878670967U;
unsigned char var_5 = (unsigned char)145;
long long int var_7 = -359433207224573735LL;
long long int var_8 = -2036369381200073684LL;
unsigned short var_10 = (unsigned short)15281;
int zero = 0;
unsigned char var_11 = (unsigned char)62;
unsigned char var_12 = (unsigned char)246;
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
