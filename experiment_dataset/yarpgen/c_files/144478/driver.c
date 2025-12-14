#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)0;
long long int var_10 = -7283463995210625406LL;
unsigned char var_13 = (unsigned char)73;
unsigned char var_14 = (unsigned char)86;
int zero = 0;
unsigned long long int var_15 = 13251477802642219029ULL;
signed char var_16 = (signed char)-25;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
