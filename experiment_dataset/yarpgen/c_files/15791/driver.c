#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)14713;
unsigned int var_11 = 725754288U;
unsigned long long int var_14 = 10057260513838468085ULL;
int var_15 = 2101649896;
unsigned long long int var_17 = 6004685328864212304ULL;
int zero = 0;
long long int var_18 = -5911465827798057303LL;
unsigned char var_19 = (unsigned char)5;
unsigned char var_20 = (unsigned char)223;
long long int var_21 = -7709810285918063610LL;
unsigned int var_22 = 333638698U;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
