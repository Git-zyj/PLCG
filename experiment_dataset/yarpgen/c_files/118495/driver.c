#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_4 = (_Bool)0;
long long int var_5 = 6777887344549544215LL;
_Bool var_14 = (_Bool)1;
unsigned short var_16 = (unsigned short)37925;
short var_19 = (short)-858;
int zero = 0;
unsigned long long int var_20 = 16405076455833350737ULL;
long long int var_21 = -2942891172463504666LL;
void init() {
}

void checksum() {
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
