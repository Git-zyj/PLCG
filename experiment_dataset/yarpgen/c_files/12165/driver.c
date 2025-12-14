#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 1703694578;
unsigned char var_3 = (unsigned char)167;
unsigned long long int var_6 = 6811621329437890483ULL;
unsigned long long int var_8 = 18053806898668359479ULL;
unsigned char var_10 = (unsigned char)88;
unsigned char var_12 = (unsigned char)90;
unsigned char var_14 = (unsigned char)35;
unsigned char var_17 = (unsigned char)210;
int zero = 0;
unsigned long long int var_18 = 15767559760514714884ULL;
unsigned char var_19 = (unsigned char)121;
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
