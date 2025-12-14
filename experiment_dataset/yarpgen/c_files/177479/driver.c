#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_5 = 8895155657979316122ULL;
int var_11 = 1292804492;
signed char var_13 = (signed char)-65;
short var_14 = (short)15259;
_Bool var_15 = (_Bool)1;
int zero = 0;
_Bool var_17 = (_Bool)1;
short var_18 = (short)-29482;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
