#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 15259429658747910551ULL;
unsigned short var_1 = (unsigned short)49592;
int var_2 = 390343415;
short var_7 = (short)10861;
int zero = 0;
int var_11 = -1380092351;
signed char var_12 = (signed char)59;
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
