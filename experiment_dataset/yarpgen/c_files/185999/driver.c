#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)48;
long long int var_4 = 6449500898359579828LL;
long long int var_11 = 6347985339040654764LL;
long long int var_13 = -3956025191196713676LL;
int zero = 0;
long long int var_16 = -2987629269174373682LL;
unsigned char var_17 = (unsigned char)254;
unsigned char var_18 = (unsigned char)202;
long long int var_19 = 5293863483240500356LL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
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
