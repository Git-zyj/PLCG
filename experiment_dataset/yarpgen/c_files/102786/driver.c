#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-27579;
unsigned int var_3 = 58480319U;
unsigned long long int var_5 = 7615125406322991614ULL;
_Bool var_6 = (_Bool)0;
signed char var_8 = (signed char)-27;
int zero = 0;
unsigned char var_13 = (unsigned char)140;
long long int var_14 = -5228679917404482891LL;
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
