#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)-27111;
unsigned int var_5 = 2659310996U;
long long int var_8 = -4917422738292420390LL;
unsigned long long int var_9 = 3751853410034619654ULL;
int zero = 0;
unsigned long long int var_11 = 16524966055861610023ULL;
unsigned long long int var_12 = 11210183501625013156ULL;
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
