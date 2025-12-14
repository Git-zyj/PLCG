#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1762296733U;
unsigned int var_1 = 935515953U;
long long int var_4 = 3145757436443302482LL;
signed char var_6 = (signed char)-65;
long long int var_7 = -5220467587320829174LL;
unsigned long long int var_8 = 16871558419456105755ULL;
int zero = 0;
unsigned short var_10 = (unsigned short)64228;
short var_11 = (short)-12984;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
