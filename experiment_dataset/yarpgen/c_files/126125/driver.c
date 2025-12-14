#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 4937692859168042345ULL;
unsigned char var_3 = (unsigned char)78;
long long int var_5 = -1633302825278354789LL;
unsigned int var_10 = 2498320178U;
unsigned int var_11 = 4051185618U;
int zero = 0;
unsigned short var_18 = (unsigned short)12247;
unsigned int var_19 = 3920069178U;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
