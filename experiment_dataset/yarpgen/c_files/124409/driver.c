#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 8972917002098866641ULL;
_Bool var_2 = (_Bool)0;
unsigned short var_3 = (unsigned short)19938;
unsigned int var_4 = 1713436465U;
unsigned long long int var_6 = 7559472027899842375ULL;
unsigned long long int var_7 = 10877708845299147064ULL;
unsigned char var_10 = (unsigned char)135;
unsigned char var_12 = (unsigned char)109;
unsigned char var_14 = (unsigned char)51;
int zero = 0;
unsigned char var_16 = (unsigned char)113;
unsigned int var_17 = 416707079U;
unsigned char var_18 = (unsigned char)166;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
