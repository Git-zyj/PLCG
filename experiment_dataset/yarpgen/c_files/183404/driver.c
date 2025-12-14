#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_6 = 3481320966U;
int var_7 = -307472120;
unsigned int var_17 = 2869511968U;
int zero = 0;
unsigned long long int var_18 = 15912983712891670546ULL;
unsigned long long int var_19 = 11764995262714619742ULL;
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
