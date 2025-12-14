#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-10855;
_Bool var_5 = (_Bool)0;
unsigned char var_7 = (unsigned char)200;
signed char var_8 = (signed char)73;
int zero = 0;
unsigned long long int var_14 = 14073665221244604073ULL;
unsigned short var_15 = (unsigned short)9261;
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
