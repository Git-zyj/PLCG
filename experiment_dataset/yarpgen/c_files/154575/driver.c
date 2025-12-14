#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)24575;
unsigned long long int var_1 = 3304807200901524925ULL;
int var_2 = 1869643728;
unsigned long long int var_3 = 7856083330071758236ULL;
unsigned int var_8 = 1426982824U;
long long int var_9 = 6737688515203967201LL;
int zero = 0;
signed char var_10 = (signed char)116;
unsigned int var_11 = 1215089115U;
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
